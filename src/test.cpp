// test.cpp: Abhinav Bansal (abhinavb05)
// Description: Take an argument of class S4 i.e. a sparse matrix and print it's properties.
#include <RcppArmadillo.h>
using namespace Rcpp;

// This is a simple function using Rcpp that creates an R list
// containing a character vector and a numeric vector.
//
// Learn more about how to use Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//
// and browse examples of code using Rcpp at:
//
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
void print_matrix_cpp(S4 obj){
  //Get class of the sparse matrix
  CharacterVector type= obj.slot("class");
  //Get dimension of the sparse matrix
  NumericVector dim = obj.slot("Dim");
  //Get i vector of the sparse matrix
  NumericVector i = obj.slot("i");
  //Get p vector of the sparse matrix
  NumericVector p = obj.slot("p");
  //Get x vector of the sparse matrix
  NumericVector x = obj.slot("x");
  //Print type/class of the sparse matrix
  Rcout<<"Type:\t"<<type<<"\n";
  //Print dimension of the sparse matrix
  Rcout<<"Dim:\t"<<dim<<"\n";
  //Print size of i vector of the sparse matrix
  Rcout<<"length of i:\t"<<i.size()<<"\n";
  //Print i vector of the sparse matrix
  Rcout<<"value of i:\t"<<i<<"\n";
  //Print size of p vector of the sparse matrix
  Rcout<<"length of p:\t"<<p.size()<<"\n";
  //Print p vector of the sparse matrix
  Rcout<<"value of p:\t"<<p<<"\n";
  //Print size of x vector of the sparse matrix
  Rcout<<"length of x:\t"<<x.size()<<"\n";
  //Print x vector of the sparse matrix
  Rcout<<"value of x:\t"<<x<<"\n";
}
