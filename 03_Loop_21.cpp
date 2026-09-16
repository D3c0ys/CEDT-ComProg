// 03_Loop_21  03_Loop_★★_CheckPassword
#include <iostream>

int main() {
	std::string pass;
	
	while(std::getline(std::cin, pass))
	{
		int check = 0b0000;
		for(char c:pass)
		{
			if ( isupper(c) )
				check |= 0b1000;
			if ( islower(c) )
				check |= 0b0100;
			if ( isdigit(c) )
				check |= 0b0010;
			if ( !isalnum(c) )
				check |= 0b0001;
		}

		if (pass.size() >= 12 && check == 0b1111)
			std::cout << ">> strong" << std::endl;
		else if (pass.size() >= 8 && (check>=0b1110) )
			std::cout << ">> weak" << std::endl;
		else
			std::cout << ">> invalid" << std::endl;
	}
}
