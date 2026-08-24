// 02_If_11  02_If_★_FacultyCode
#include <iostream>
#include <string>
#include <iterator>

int notin(int n, int arr[27]){
	for(int i = 0; i < 27; i++){
		if ( n == arr[i]){
			return -1;
		}
	}
	return 0;
}

int main() {
	int arr[27] = {1,2,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,51,53,55,58};
	std::string n;
	std::cin >> n;
	if (n.length() == 2 && ( ('0' <= n[0] && n[0] <= '9') && ('0' <= n[1] && n[1] <= '9') ) ){
		if ( notin( stoi(n) , arr ) == -1)	{
			std::cout << "OK" << std::endl;
		}
		else{
			std::cout << "Error" << std::endl;
		}
	}else{
		std::cout << "Error" << std::endl;
	}
	return 0;
}
