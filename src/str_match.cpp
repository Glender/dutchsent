#include <Rcpp.h>


//' @title Count how many letters from a word occur in a target.
//' @param word CharacterVector.
//' @param target CharacterVector.
//' @export
// [[Rcpp::export]]
double str_match(std::string word, std::string target) {

  unsigned int word_len = word.length();
  unsigned int target_len = target.length();

  unsigned int matches = 0;
  for( int i = 0 ; i < word_len ; i++ ){

    // Case sensitive compare!
    if (word[i] == target[i]) {
      matches += 1;
    } else {
      break;
    }
  }

  // Calculate similarity ratio based on longest word.
  double similarity_ratio;

  if(word_len > target_len) {
    similarity_ratio = matches / (double)word_len;
  } else {
    similarity_ratio = matches / (double)target_len;
  }

  return similarity_ratio;
}


