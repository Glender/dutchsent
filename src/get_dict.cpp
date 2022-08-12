#include <Rcpp.h>

using namespace Rcpp;

// https://teuder.github.io/rcpp4everyone_en/230_R_function.html
// https://gallery.rcpp.org/articles/accessing-environments/
// https://teuder.github.io/rcpp4everyone_en/280_environment.html


//' @export
// [[Rcpp::export]]
DataFrame get_dict(){

  // Retrieving the package environment
  Environment env("package:dutchsent");

  // Retrieving objects "score" and "word" from
  // the package environment
  NumericVector score = env["score"];
  CharacterVector word = env["word"];

  // store the values in a data.frame
  DataFrame df = DataFrame::create(
    Named("word") = clone(word), Named("score") = clone(score)
  );

  return df;
}
