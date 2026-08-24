#include<iostream>
#include<string>

int main()
{
	std::string id;
	int sum = 0;
	int n12;
	std::cin >> id;
	
	for(int i=0;i<12;i++)
		sum += (13-i)*(id[i]-'0');

	n12 = ( 11 - (sum%11) ) % 10;

	for(int i=0;i<12;i++){
		if(i == 1 || i == 5 || i== 10)
		{
			std::cout << "-" << id[i];
		}
		else
			std::cout << id[i];
	}
	std::cout << "-" << n12 << std::endl;
}
