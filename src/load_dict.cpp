#include <Rcpp.h>

using namespace Rcpp;

// Inspired by:
// -------------------------------------------------------------
// https://teuder.github.io/rcpp4everyone_en/230_R_function.html
// https://gallery.rcpp.org/articles/accessing-environments/
// https://teuder.github.io/rcpp4everyone_en/280_environment.html


//' @export
// [[Rcpp::export]]
const Rcpp::DataFrame load_dict(){

  // Retrieving the package environment
  Environment env("package:dutchsent");

  // Loading internal data.frame sentiment dictionary
  Rcpp::DataFrame dict = as<Rcpp::DataFrame>(env["dict"]);

  return dict;
}
