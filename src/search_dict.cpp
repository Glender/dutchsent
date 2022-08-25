#include <Rcpp.h>

using namespace Rcpp;

// https://kevinushey.github.io/blog/2015/01/24/understanding-data-frame-subsetting/

//' @title Load your dutch sentiment dictionary and search a word in it.
//' @description Find the sentiment score of a word in the sentiment dictionary.
//' @param w CharacterVector. Words you want to test, each in a separate vector.
//' @param words CharacterVector. Words from your sentiment dictionary.
//' @param scores IntegerVector. Scores that belong to each word in your dict.
//' @examples
//' dict <- load_dict()
//' words <- c("goed", "leuk")
//' search_dict(words, dict$word, dict$score)
//' @export
// [[Rcpp::export]]
IntegerVector search_dict(CharacterVector w, CharacterVector words, IntegerVector scores){

  // find the indices of w in your dictionary
  IntegerVector matches = match(w, words);

  // subsetting in Rcpp can't handle NA's
  // so remove NA's from matches
  matches = na_omit(matches);

  // when matches is an empty vector it returns `integer(0)`
  // so return IntegerVector 0 when this is the case.
  if( matches.length() == 0 ) {
    return IntegerVector {0};
  }

  // Look up the score that belongs to each word in the dictionary.
  else return scores[matches];
}
