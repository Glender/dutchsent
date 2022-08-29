#include <Rcpp.h>
#include "levenshtein.h"
#include "idx_lookup.h"

//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector dict_index(

    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    unsigned int cutoff_levenstein,
    double cutoff_LCS

){

  // Find proximity scores for each words
  // given all dictionary words.
  Rcpp::List edit_dist = most_similar_levenstein(words, dict_words);

  // Lookup for the values of the words in
  // the sentiment dictionary.
  Rcpp::IntegerVector idx = dict_idx_lookup(
    edit_dist, words, dict_words, cutoff_levenstein, cutoff_LCS
  );

  return idx;
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
//' algorithmic_search_dict(words, dict$word, dict$score, cutoff = 2)
//' @export
// [[Rcpp::export]]
Rcpp::IntegerVector algorithmic_search_dict(

    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    Rcpp::IntegerVector dict_scores,
    unsigned int cutoff_levenstein,
    double cutoff_LCS

){

  Rcpp::IntegerVector idx = dict_index(
    words, dict_words, cutoff_levenstein, cutoff_LCS
  );

  return dict_scores[idx];
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
    unsigned int cutoff_levenstein,
    double cutoff_LCS

){

  Rcpp::IntegerVector idx = dict_index(
    words, dict_words, cutoff_levenstein, cutoff_LCS
  );

  return dict_words[idx];
}

