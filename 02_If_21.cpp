// 02_If_21  02_If_★★_AbbrevNum
#include <iostream>
#include <string>

int main() {
	std::string num;
	std::cin >> num;

	std::cout << num.length();

	if(num.length()-1 % 3 == 0)
	{
		std::cout << (num.length()-1)/3;
	}

    return 0;
}
