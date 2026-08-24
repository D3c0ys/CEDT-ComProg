#include<iostream>
#include<string>

long gcd(long a, long b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	int rep,nrep;
	std::string a,b,c;
	std::cin >> a >> b >> c;

	std::string dec_1 = b+c;

	rep = c.size();
	nrep = b.size();

	std::string nine = "";
	std::string zero = "";
	for(int i=0; i<rep; i++)
		nine += "9";
	for(int i=0; i<nrep; i++)
		zero += "0";

	zero = (b == "0") ? "" : zero;

	int numer = stoi(dec_1) - stoi(b);
	int denot = stoi(nine+zero);
	numer = stoi(a)*denot+numer;
	int gcd_v = gcd(numer,denot);
	numer = numer/gcd_v;
	denot = denot/gcd_v;
	std::cout << numer << " / " << denot;
}
