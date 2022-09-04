#include <Rcpp.h>
using namespace Rcpp;

// Functions for getting nchar (as integer) for strings in Rcpp.
// Inspired by this blog post by Romain Francois:
// https://purrple.cat/blog/2018/03/05/strings-know-their-own-length/

// scalar input
// example:
// str_len("cats")
// [1] 4
// [[Rcpp::export]]
int str_len(String x) {
  return(LENGTH(x.get_sexp()));
}


// vector input
// example:
// str_len_vectorized(c("cats", "frogs"))
// [1] 4 5
// [[Rcpp::export]]
IntegerVector str_len_vectorized(CharacterVector x) {
  int x_len = x.size();
  IntegerVector out(x_len);

  CharacterVector::iterator x_end = x.end();
  CharacterVector::iterator iter;
  int i = 0;
  for(iter = x.begin(); iter != x_end; ++iter) {
    out[i] = LENGTH(*iter);
    i++;
  }

  return(out);
}
