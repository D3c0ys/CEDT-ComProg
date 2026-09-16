// 03_Loop_15  03_Loop_★_Parentheses
#include <iostream>

int main() {
	std::string s;
	std::getline(std::cin, s);

	for(char & c:s)
	{
		if ( c == '(' )
			c = '[';
		else if ( c == '[' )
			c = '(';
		else if ( c == ')' )
			c = ']';
		else if ( c == ']' )
			c = ')';
	}

	std::cout << s << std::endl;
}
