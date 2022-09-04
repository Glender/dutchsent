#include <Rcpp.h>
#include "str_match.h"

using namespace Rcpp;

// https://stackoverflow.com/questions/59055902/find-index-of-all-max-min-values-in-vector-in-rcpp


//' @title Find the max indices given a list of edit distances.
//' @description Function is designed to find the min indices in a list of numeric vectors.
//' The numeric vectors consist of edit distances, numeric values.
//' @param list_of_edit_distances A list of numeric vectors.
//' @param words CharacterVector. List of words.
//' @param dict_words CharacterVector. Word dictionary.
//' @param cutoff_levenstein Integer. Levenshtein Distance cutoff.
//' @param cutoff_LCS Double. Least Common Substring ratio cutoff.
//' @return IntegerVector
//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector dict_idx_lookup(

    Rcpp::List list_of_edit_distances,
    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    unsigned int cutoff_levenstein,
    double cutoff_sim_ratio

){

  int len_list = list_of_edit_distances.length();
  Rcpp::IntegerVector idx(len_list);

  // list_of_edit_distances gives for each word
  // proximity scores for a specified list of words.
  for(int i=0; i < len_list; i++){

    NumericVector v = list_of_edit_distances[i];

    unsigned int least_dist = min(v);
    unsigned int idx_dict = which_min(v);

    /*
     * Calculate similarity ratio. That is,
     * how many letters from the word match with
     * the target, by starting counting from the
     * first to the last letter.
    */
    double proximity_ratio = str_match(
      Rcpp::as<std::string>(words[i]),
      Rcpp::as<std::string>(dict_words[idx_dict])
    );

    // filter your proximity scores on cutoff
    if(least_dist > cutoff_levenstein | proximity_ratio < cutoff_sim_ratio) {

      // 5207 maps to '0' in the dictionary, because NA's
      // aren't subsettable, so a neutral score is given.
      idx[i] = 5207;

    } else {
      idx[i] = idx_dict;
    }
  }
  return idx;
}
