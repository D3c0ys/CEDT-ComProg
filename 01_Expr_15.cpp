// 01_Expr_15  01_Expr_★_An_Expression_II
#include <iostream>
#include <cmath>

int main() {
	double x;
	std::cin >> x;
	std::cout << round( (pow(x, sqrt( log(pow(x+1,2)) ) ))/(10-x) * 1e6 )/1e6 << std::endl;
    return 0;
}
