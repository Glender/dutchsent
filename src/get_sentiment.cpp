#include <Rcpp.h>
#include "algorithmic_search.h"
#include "get_words_Cpp.h"
#include "to_lowercase.h"

using namespace Rcpp;

//' @export
// [[Rcpp::export]]
CharacterVector get_sentiment(Rcpp::CharacterVector text) {

  CharacterVector words = to_lowercase(get_words_Cpp(text));

  return words;
}


