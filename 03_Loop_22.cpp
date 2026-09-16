// 03_Loop_22  03_Loop_★★_Factorization
#include <iostream>

int main() {
	int num;
	int num2;
	int div = 2;
	std::cin >> num;

	if ( num <= 1 )
		return 0;
	num2 = num;
	while(num2 != 1)
	{
		if(num2%div == 0)
		{
			if (num2 != num)
				std::cout << "*";
			std::cout << div;
			num2 = num2/div;
		}
		else
			div++;
	}
	std::cout << std::endl;
}
