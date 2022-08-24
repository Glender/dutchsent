#include <Rcpp.h>
using namespace Rcpp;


//' @title Check whether words are in a word list.
//' @param word_list Vector of Characters, each a word.
//' @param words Vector of Characters, each a word.
//' @export
// [[Rcpp::export]]
bool str_contains(CharacterVector words, CharacterVector word_list) {

  bool result = is_true(any(in(word_list, words)));

  return result;
}
