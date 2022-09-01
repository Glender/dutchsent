#include <Rcpp.h>
#include "algorithmic_search.h"
#include "get_words_Cpp.h"
#include "to_lowercase.h"
#include "load_dict.h"
#include "load_negation_words.h"
#include "load_stopwords.h"

using namespace Rcpp;

// retrieve word lists
const Rcpp::CharacterVector stopwords = load_stopwords();
const Rcpp::CharacterVector negation_words = load_negation_words();


//' @export
// [[Rcpp::export]]
Rcpp::CharacterVector get_sentiment(

    Rcpp::CharacterVector text
  ) {

  // dict is too big to define out of function body.
  // It will likely crash R if defined outside.
  const Rcpp::DataFrame sentiment_dict = load_dict();

  CharacterVector words = to_lowercase(get_words_Cpp(text));


  return words;
}


