// 02_If_14  02_If_★_MajorChange
#include <iostream>
#include <string>

typedef struct {
	std::string id;
	float gpax;
	char com;
	char cal1;
	char cal2;
} Student;

int main() {

	Student s1,s2,stmp;
	std::string choose;
	std::cin >> s1.id >> s1.gpax >> s1.com >> s1.cal1 >> s1.cal2;
	std::cin >> s2.id >> s2.gpax >> s2.com >> s2.cal1 >> s2.cal2;

	if (!(s1.com == 'A' && s1.cal1 <= 'C' && s1.cal2 <= 'C'))
		s1.id = "0";
	if (!(s2.com == 'A' && s2.cal1 <= 'C' && s2.cal2 <= 'C'))
		s2.id = "0";

	if (s1.id == "0" || s2.id == "0")
	{
		if (s1.id == "0" && s2.id == "0"){
			std::cout << "None"; return 0;
		}
		if (s1.id != "0"){
			std::cout << s1.id; return 0;
		}else{
			std::cout << s2.id; return 0;
		}
	}

	if( s1.gpax < s2.gpax ){
		std::cout << s2.id; return 0;}
	if( s1.gpax > s2.gpax ){
		std::cout << s1.id; return 0;}
	if (s1.cal1 < s2.cal1){
		std::cout << s1.id; return 0;}
	if (s1.cal1 > s2.cal1){
		std::cout << s2.id; return 0;}
	if (s1.cal2 < s2.cal2){
		std::cout << s1.id; return 0;}
	if (s1.cal2 > s2.cal2){
		std::cout << s2.id; return 0;}

	std::cout << "Both";

    return 0;
}
