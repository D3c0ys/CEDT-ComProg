// 01_Expr_14  01_Expr_★_Songkran
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int year, y;
	std::cin >> year;
	year = year - 543;
	y = year % 100;
	std::cout << (y+((int)y/4)+11)%7 << std::endl;
    return 0;
}
