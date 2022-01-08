#include<Rcpp.h>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"UpAndOutOption.h"

using namespace Rcpp;
using std::vector;

// [[Rcpp::export]]
double getUpAndOutPutOption(
  int nInt,
  double Strike,
  double Spot,
  double Vol,
  double Rfr,
  double Expiry,
  double Barrier,
  int nReps = 1000){

	srand( time(NULL) );

	UpAndOutOption myOption(nInt, Strike, Spot, Vol, Rfr, Expiry, Barrier);

	double price = myOption.getUpAndOutPutOption(nReps);
	
	return price;
}
