#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
const CharacterVector load_stopwords() {

  const CharacterVector stop_words = {
    "de", "en", "van", "ik", "te", "dat", "die", "in", "een", "hij",
    "het", "zijn", "is", "was", "op", "aan", "met", "als", "andere",
    "voor", "had", "er", "maar", "om", "hem", "dan", "zou", "of",
    "wat", "mijn", "men", "dit", "zo", "door", "over", "ze", "zich",
    "ook", "tot", "je", "mij", "uit", "der", "daar", "haar", "iemand",
    "naar", "heb", "hoe", "heeft", "hebben", "deze", "u", "want",
    "nog", "zal", "me", "zij", "nu", "ge", "omdat", "iets", "hele",
    "worden", "toch", "al", "waren", "veel", "meer", "doen", "toen",
    "moet", "ben", "heel", "kan", "hun", "dus", "alles", "onder",
    "ja", "eens", "hier", "wie", "werd", "altijd", "doch", "wordt",
    "wezen", "kunnen", "ons", "zelf", "tegen", "na", "reeds", "wil",
    "kon", "uw", "u", "geweest"
  };

  return stop_words;
}
