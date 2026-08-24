// 01_Expr_13  01_Expr_★_Quadratic_Root
#include <iostream>
#include <cmath>

double first_sol(double a, double b, double c){
	return (-b-sqrt(b*b-4*a*c))/(2*a);
}
double sec_sol(double a, double b, double c){
	return (-b+sqrt(b*b-4*a*c))/(2*a);
}

int main() {

	double a,b,c;

	std::cin >> a >> b >> c;

	std::cout << round(first_sol(a,b,c)*1e3)/1e3 << " ";
	std::cout << round(sec_sol(a,b,c)*1e3)/1e3 << std::endl;

    return 0;
}
