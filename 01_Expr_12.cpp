// 01_Expr_12  01_Expr_★_Body_Surface_Area
#include <iostream>
#include <iomanip>
#include <cmath>

double mosteller(double w, double h){
	return ( sqrt( w * h)/60 );
}
double haycock(double w, double h){
	return 0.024265*pow(w, 0.5378)*pow(h,0.3964);
}
double boyd(double w, double h){
	return ( 0.0333 * pow(w, 0.6157-0.0188*log10(w) ) * pow(h, 0.3) );
}

int main() {
	double w, h;
	std::cin >> w >> h;
	std::cout << std::setprecision(15);	
	std::cout << mosteller(w,h) << std::endl;
	std::cout << haycock(w,h) << std::endl;
	std::cout << boyd(w,h) << std::endl;
    return 0;
}
