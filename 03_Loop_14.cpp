// 03_Loop_14  03_Loop_★_MCQ
#include <iostream>

int main() {
	std::string s1;
	std::string s2;

	std::getline(std::cin, s1);
	std::getline(std::cin, s2);

	if (s1.size() != s2.size() )
	{
		std::cout << "Incomplete answer";
		return 0;
	}

	int count = 0;
	int i = 0;
	while(s1[i])
	{
		if (s1[i] == s2[i])
			count++;
		i++;
	}
	std::cout << count << std::endl;
}
