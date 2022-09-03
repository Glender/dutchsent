#include <Rcpp.h>
#include "algorithmic_search.h"
#include "get_words_Cpp.h"
#include "to_lowercase.h"
#include "load_dict.h"
#include "load_negation_words.h"
#include "load_stopwords.h"
#include "remove_words.h"

using namespace Rcpp;

// retrieve word lists
const Rcpp::CharacterVector stopwords = load_stopwords();
const Rcpp::CharacterVector negation_words = load_negation_words();


//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector get_sentiment(

    Rcpp::CharacterVector text

  ) {

  // dict is too big to define out of function body.
  // It will likely crash R if defined outside.
  Rcpp::DataFrame sentiment_dict = load_dict();

  CharacterVector words = to_lowercase(get_words_Cpp(text));
  words = remove_words(words, stopwords);

  // Check presence of negation words (e.g. 'niet','geen','zonder') in text.
  LogicalVector negation_presence = in(words, negation_words);
  bool con = is_true(any(negation_presence));

  //
  Rcpp::IntegerVector sentiment_score;

  if(con){

    sentiment_score = 0;

  } else {

    sentiment_score = algorithmic_search_dict(
      words,
      sentiment_dict['word'],
      sentiment_dict['score'],
      2, .66
    );

  }
  return sentiment_score;
}
