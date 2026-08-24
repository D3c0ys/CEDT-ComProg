// 02_If_15  02_If_★_MobileNumber
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

int main() {
	std::vector<std::string> num = {"02","09","06","08"};
	std::string s;
	std::cin >> s;

	auto it = std::find(num.begin(), num.end(), s.substr(0,2));

	std::cout << ( ( s.length()==10 && it!=num.end() ) ? "Mobile number" : "Not a mobile number");

    return 0;
}
