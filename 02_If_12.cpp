// 02_If_12  02_If_★_Grading
#include <iostream>

int main() {
	double s;
	std::cin >> s;
	if (s >= 80){
		std::cout << "A";
	}else if(s >= 70){
		std::cout << "B";
	}else if(s >= 60){
		std::cout << "C";
	}else if(s >= 50){
		std::cout << "D";
	}else{
		std::cout << "F";
	}
    return 0;
}
