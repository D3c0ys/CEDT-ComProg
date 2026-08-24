// 02_If_13  02_If_★_Gymnastic_Score
#include <iostream>
#include <cmath>
#include <climits>

int main() {
	double scr[4];
	double sum=0;
	double min_n=INT_MAX;
	double max_n=INT_MIN;

	for(int i=0; i<4; i++)
		std::cin >> scr[i];
	for(int i=0; i<4; i++)
		sum+=scr[i];
	for(int i=0; i<4; i++)
	{
		if (scr[i] < min_n)
			min_n = scr[i]; 
	}
	for(int i=0; i<4; i++)
	{
		if (scr[i] > max_n)
			max_n = scr[i]; 
	}
	sum = sum - (min_n+max_n);
	std::cout << round(sum/2 * 100.0)/100.0 << std::endl;

	
    return 0;
}
