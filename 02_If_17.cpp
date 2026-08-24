// 02_If_17  02_If_★_RegisteredMail
#include <iostream>
#include <string>

int main() {
	int w;
	std::string price = "18";
	std::cin >> w;

	if ( w > 100 ) price = "22";
	if ( w > 250 ) price = "28";
	if ( w > 500 ) price = "38";
	if ( w > 1000 ) price = "58";
	if ( w > 2000 ) price = "Reject";

	std::cout << price;

    return 0;
}
