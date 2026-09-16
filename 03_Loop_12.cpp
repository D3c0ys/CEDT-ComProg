// 03_Loop_12  03_Loop_★_Bisection_Log10
#include <iostream>
#include <cmath>
#include <algorithm>

double f(double x)
{
	return powl(10,x);
	//return x*x;
}

bool Nclose(double a, double x) {
    return std::abs(a - f(x) ) <= powl(10, -10) * std::max(a, f(x));
}

int main() {
	double a;
	double L, U;
	double x;
	std::cin >> a;

	L = 0;
	U = a;
	x = (L+U)/2;
	while(!Nclose(a,x))
	{
		if (f(x) > a)
			U = x;
		else if (f(x) < a)
			L = x;
		x = (L+U)/2;
	}
	std::cout << x;
}
