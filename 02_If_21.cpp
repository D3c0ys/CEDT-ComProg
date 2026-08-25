// 02_If_21  02_If_★★_AbbrevNum
#include <iostream>
#include <string>
#include <cmath>

int main() {
	std::string num;
	std::cin >> num;

	if (num.length()>=4 && num.length()<=6 ){
		std::cout << round(stoi(num)/pow(10,(num.length()==4?2:3)))/(num.length()==4?10:1) << "K";
	}
	else if (num.length()>=7 && num.length()<=9 ){
		num = num.substr(0,num.length()-3);
		std::cout << round(stoi(num)/pow(10,(num.length()==4?2:3)))/(num.length()==4?10:1) << "M";
	}
	else if (num.length()>=10){
		num = num.substr(0,num.length()-6);
		std::cout << round(stoi(num)/pow(10,(num.length()==4?2:3)))/(num.length()==4?10:1) << "B";
	}
	else{
		std::cout << stoi(num);
	}
}
