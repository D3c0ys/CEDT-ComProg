#include <iostream>
#include <math.h>

int main()
{
	int xe,ye,re,rp,xm,ym;
	std::cin >> xe >> ye >> re >> rp >> xm >> ym;

	double c2m,x,y;
    c2m	= sqrt( pow(xm-xe,2) + pow(ym-ye,2) ); // center to mouse
	x = (re-rp)/c2m * (xm-xe);
	y = (re-rp)/c2m * (ym-ye);

	std::cout << round(xe+x) << " " << round(ye+y);

	return 0;
}
