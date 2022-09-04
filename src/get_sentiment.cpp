#include <Rcpp.h>
#include "algorithmic_search.h"
#include "get_words_Cpp.h"
#include "to_lowercase.h"
//#include "load_dict.h"
#include "load_negation_words.h"
#include "load_stopwords.h"
#include "remove_words.h"
#include "str_len_vec.h"

using namespace Rcpp;

// retrieve word lists
const Rcpp::CharacterVector stopwords = load_stopwords();
const Rcpp::CharacterVector negation_words = load_negation_words();


//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector get_sentiment(

    Rcpp::CharacterVector text,
    Rcpp::CharacterVector dict_words,
    Rcpp::IntegerVector dict_scores,
    unsigned int cutoff_levenstein,
    double cutoff_sim_ratio

  ) {

  // dict is too big to define out of function body.
  // It will likely crash R if defined outside.
  //Rcpp::DataFrame sentiment_dict = load_dict();

  CharacterVector words = to_lowercase(get_words_Cpp(text));
  words = remove_words(words, stopwords);

  // Remove words with two or less characters.
  IntegerVector len_charvec = str_len_vectorized(words);
  words = words[str_len_vectorized(words) > 2];

  // Check presence of negation words (e.g. 'niet','geen','zonder') in text.
  LogicalVector negation_presence = in(words, negation_words);
  bool negation_present = is_true(any(negation_presence));

  //
  Rcpp::IntegerVector sentiment_score;

  if(negation_present){

    sentiment_score = 0;

  } else {

    sentiment_score = algorithmic_search_dict(
      words, dict_words, dict_scores,
      cutoff_levenstein, cutoff_sim_ratio
    );

  }
  return sentiment_score;
}
