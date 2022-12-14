#include <Rcpp.h>
#include <algorithm>
#include <string>

using namespace Rcpp;


// [[Rcpp::export]]
double jaro_distance(const std::string s1, const std::string s2) {

  const uint l1 = s1.length(), l2 = s2.length();
  if (l1 == 0)
    return l2 == 0 ? 1.0 : 0.0;

  const uint match_distance = std::max(l1, l2) / 2 - 1;
  bool s1_matches[l1];
  bool s2_matches[l2];

  std::fill(s1_matches, s1_matches + l1, false);
  std::fill(s2_matches, s2_matches + l2, false);
  uint matches = 0;

  for (uint i = 0; i < l1; i++)
  {
    const int end = std::min(i + match_distance + 1, l2);
    for (int k = std::max(0u, i - match_distance); k < end; k++)
      if (!s2_matches[k] && s1[i] == s2[k])
      {
        s1_matches[i] = true;
        s2_matches[k] = true;
        matches++;
        break;
      }
  }

  if (matches == 0){
    return 0.0;
  }
  double t = 0.0;
  uint k = 0;
  for (uint i = 0; i < l1; i++)
    if (s1_matches[i])
    {
      while (!s2_matches[k]) k++;
      if (s1[i] != s2[k]) t += 0.5;
      k++;
    }
    const double m = matches;

    return (m / l1 + m / l2 + (m - t) / m) / 3.0;
}


//' Calculate for each string the Jaro Distance given a set of target strings.
//'
//' @param strings String Vector.
//' @param targets String Vector.
//' @export
// [[Rcpp::export]]
List most_similar_jaro(std::vector< std::string > strings, std::vector< std::string > targets) {

  // create list to store results
  unsigned int num_strings = strings.size();
  List out(num_strings);

  unsigned int num_targets = targets.size();
  for( int i=0; i < num_strings; i++ ) {

    NumericVector v(num_targets);
    for( int j=0; j < num_targets; j++ ) {

      // calculate edit distance ratio for each target and store them in v
      v[j] = jaro_distance(strings[i], targets[j]);
    }
    out[i] = v;
  }
  return out;
}
