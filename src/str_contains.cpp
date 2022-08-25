#include <Rcpp.h>

using namespace Rcpp;

//' @title Check whether words are in a word list.
//' @description Returns `TRUE` if a word or vector of words
//' are in a word list. Otherwise it returns FALSE.
//' @param word_list Vector of Characters, each a word.
//' @param words Vector of Characters, each a word.
//' @export
// [[Rcpp::export]]
bool str_contains(CharacterVector words, CharacterVector word_list) {

  // Equivalent of %in% in R.
  bool result = is_true(any(in(word_list, words)));

  return result;
}
