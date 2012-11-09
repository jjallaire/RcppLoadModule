#include <Rcpp.h>

using namespace Rcpp;

SEXP rcpp_hello_world(){
    
    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;
    
    return z ;
}


RCPP_MODULE(HelloWorld) {
  function("rcpp_hello_world", &rcpp_hello_world);
}
