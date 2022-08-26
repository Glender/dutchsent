#include <Rcpp.h>
using namespace Rcpp;

// https://stackoverflow.com/questions/59055902/find-index-of-all-max-min-values-in-vector-in-rcpp


//' @title Find the max indices given a list of edit distances.
//' @description Function is designed to find the min indices in a list of numeric vectors.
//' The numeric vectors consist of edit distances, numeric values.
//' @param list_of_edit_distances A list of numeric vectors.
//' @param least_dist Integer. Levenshtein Distance cut-off.
//' @return IntegerVector
//' @export
//' @examples
//' edit_dist <- list(c(5, 4, 7), c(5, 1, 4))
//' idx_lookup_min(edit_dist, 2)
//' # Returns:
//' # c(NA, 2)
// [[Rcpp::export]]
Rcpp::IntegerVector idx_lookup_min(
    Rcpp::List list_of_edit_distances, unsigned int cutoff
){

  int len_list = list_of_edit_distances.length();
  Rcpp::IntegerVector idx(len_list);

  // list_of_edit_distances gives for each word
  // proximity scores for a specified list of words.
  for(int i=0; i < len_list; i++){

    NumericVector v = list_of_edit_distances[i];
    unsigned int least_dist = min(v);

    // filter your proximity scores
    if(least_dist > cutoff) {
      idx[i] = NA_INTEGER;

    } else {
    // R starts counting from 1, not 0; thus + 1.
      idx[i] = which_min(v) + 1;
    }
  }
  return idx;
}
