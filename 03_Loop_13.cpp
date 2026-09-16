// 03_Loop_13  03_Loop_★_CountWord
#include <iostream>
#include <sstream>
#include <string>

int main() {
	std::string line, word, cleaned;

	std::getline(std::cin, word);
	std::getline(std::cin, line);

	for(char c : line)
	{
		if (c == '"' || c=='(' || c==')' || c==',' || c=='.' || c=='\'')
		{
			cleaned += ' ';
		}
		else
		{
			cleaned += c;
		}
	}
	std::istringstream iss(cleaned);
	std::string token;

	int count = 0;
	while(iss >> token)
	{
		if (token == word)
			count++;
	}
	std::cout << count << std::endl;
}
