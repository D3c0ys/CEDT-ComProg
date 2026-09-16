// 03_Loop_16  03_Loop_★_PrintTriangle
#include <iostream>

int main() {
	int h;
	std::cin >> h;

	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < h-i-1; j++)
		{
			std::cout << '.';
		}
		std::cout << '*';
		for(int j = 0; j < 2*i-1; j++)
		{
			if (i != h-1)
				std::cout << '.';
			else if (i == h-1)
				std::cout << '*';
			if ( j == 2*i-2)
				std::cout << '*';
		}
		std::cout << std::endl;
	}
}
