#include <Rcpp.h>

using namespace Rcpp;

//' @export
// [[Rcpp::export]]
Rcpp::CharacterVector to_lowercase(Rcpp::CharacterVector str) {

  // Obtaining namespace of our package.
  Environment pkg = Environment::namespace_env("base");

  // Picking up get_words() function from the package.
  Function f = pkg["tolower"];

  return f(str);
}
