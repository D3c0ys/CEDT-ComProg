// 03_Loop_11  03_Loop_★_Average
#include <iostream>
#include <string>
#include <cmath>

#define R(x) round(x*100)/100

int main() {
	double val = 0;
	double sum = 0;
	double count = 0;
	std::cin >> val;
	while(val != -1)
	{
		sum += val;
		count++;
		std::cin >> val;
	}
	if (val == -1 && count == 0)
	{
		std::cout << "No Data";
		return 0;
	}
	std::cout << R(sum/count) << std::endl;
}
