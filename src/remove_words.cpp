#include <Rcpp.h>
using namespace Rcpp;

//' @title Remove words from a vector of words.
//' @param words. A vector of single words.
//' @param word_list. A vector with words that you want to remove.
//' @export
//' @examples
//' some_words <- c("hallo", "there", "die")
//' remove <- c("zo", die")
//' remove_words(some_words, remove)
// [[Rcpp::export]]
CharacterVector remove_words(CharacterVector words, CharacterVector word_list) {
  return Rcpp::setdiff(words, word_list);
}
