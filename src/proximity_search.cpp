#include <Rcpp.h>
#include "levenshtein.h"
#include "idx_lookup_min.h"

//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector proximity_search_dict(

    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    Rcpp::IntegerVector dict_scores,
    unsigned int cutoff
){

  // Find proximity scores for each words
  // given all dictionary words.
  Rcpp::List edit_dist = most_similar_levenstein(words, dict_words);

  // Lookup for the values of the words in
  // the sentiment dictionary.
  Rcpp::IntegerVector s = idx_lookup_min(edit_dist, cutoff);

  return s;
}


//' @title Find the sentiment score of a word in the sentiment dictionary.
//' @param words CharacterVector. Vector of words.
//' @param dict_words CharacterVector. A word dictionary.
//' @param dict_scores IntegerVector. Scores for each word in the dictionary.
//' @param cutoff Integer. The number of single-character edits required
//' to change a word in the target word.
//' @return IntegerVector. Sentiment scores for each word, 0 if no match was found.
//' @examples
//' words <- c("stomme", "goede")
//' proximity_search_score(words, dict$word, dict$score, cutoff = 2)
//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector proximity_search_score(

    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    Rcpp::IntegerVector dict_scores,
    unsigned int cutoff
){

  Rcpp::IntegerVector s = proximity_search_dict(
    words, dict_words, dict_scores, cutoff
  );

  return dict_scores[s];
}


//' @title Find the most similar word in the dictionary.
//' @param words CharacterVector. Vector of words.
//' @param dict_words CharacterVector. A word dictionary.
//' @param dict_scores IntegerVector. Scores for each word in the dictionary.
//' @param cutoff Integer. The number of single-character edits required
//' to change a word in the target word.
//' @export
// [[Rcpp::export]]
Rcpp::CharacterVector most_similar_word(

    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    Rcpp::IntegerVector dict_scores,
    unsigned int cutoff
){

  Rcpp::IntegerVector s = proximity_search_dict(
    words, dict_words, dict_scores, cutoff
  );

  return dict_words[s];
}
