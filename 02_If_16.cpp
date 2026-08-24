// 02_If_16  02_If_★_Positive_Negative
#include <iostream>
#include <string>
#include <cmath>

int main() {
	std::string num;
	std::cin >> num;
	std::string sign = "positive";
	std::string parity = "even";
	if (num[0]=='-') sign = "negative";
	if (num=="0") sign = "zero";
	if (abs(std::stoi(num))%2!=0) parity = "odd";
	std::cout << sign << "\n" << parity;
    return 0;
}
