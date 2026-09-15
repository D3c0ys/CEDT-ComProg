// 02_If_31  02_If_★★★_Biorhythm
#include <iostream>
#include <cmath>

#include<unistd.h>
#include<stdlib.h>

char *stdinRead()
{
	char *s;
	char *buf, *tmp, *tmpex;
	int bytes = 0;

	buf = (char *)malloc(1);
	tmp = NULL;
	tmpex = NULL;

	while(read(0, buf, 1) != 0 && *buf != '\n' && *buf != ' '){
		tmpex = (char *)malloc(bytes+2);
		if(tmp != NULL)
		{
			for(int i=0;i<bytes;i++)
			{
				tmpex[i] = tmp[i];
			}
			free(tmp);
		}
		tmpex[bytes]=buf[0];
		tmpex[bytes+1]=0x00;

		tmp = tmpex;
		bytes++;
	}

	tmp = NULL;

	s = (char *)malloc(bytes+1);
	for(int i=0;i<bytes;i++)
	{
		s[i] = tmpex[i];
	}
	s[bytes] = 0x00;
	free(tmpex);
	free(buf);
	return s;
}

int stoi_free(char *s)
{
	int sum = 0;
	int i = 0;
	while (s[i])
	{
		sum = sum *10 + ( s[i] - '0' );
		i++;
	}
	free(s);
	return sum;
}

void shownum(int n)
{
	char c = n%10 + '0';
	if (n/10 != 0)
		shownum(n/10);
	write(1, &c, 1);
	return ;
}

int dayLeft(int d, int m, int y){
	int year[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int countDays = 0;
	for(int i = 0; i < m-1; i++)
		countDays += year[i];

	countDays += d;
	int leap = ( y%4 == 0 && y%100 != 0 ) || ( y%400 == 0 );
	if ( leap && m > 2 )
		countDays++;
	return (365+leap)-countDays;
}

int dayOfYear(int d, int m, int y){
	int year[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int countDays = 0;
	for(int i = 0; i < m-1; i++)
		countDays += year[i];

	countDays += d;
	int leap = ( y%4 == 0 && y%100 != 0 ) || ( y%400 == 0 );
	if ( leap && m > 2 )
		countDays++;
	return countDays;
}

#define R(x) round(x*100.0)/100.0
#include<stdio.h>

int main() {
	int di = stoi_free(stdinRead());
	int mi = stoi_free(stdinRead());
	int yi = stoi_free(stdinRead()) - 543;

	int df = stoi_free(stdinRead());
	int mf = stoi_free(stdinRead());
	int yf = stoi_free(stdinRead()) - 543;

	int yearGaps = 365*(yf-yi-1);
	int totalDay = dayLeft(di,mi,yi) + dayOfYear(df,mf,yf) + yearGaps;
	//printf("%d %d %d\n", dayLeft(di,mi,yi), dayOfYear(df,mf,yf), yearGaps);
	std::cout << totalDay;
	std::cout << " "; 
	std::cout << R(sin(M_PI*2*totalDay / 23));
	std::cout << " "; 
	std::cout << R(sin(M_PI*2*totalDay / 28));
	std::cout << " "; 
	std::cout << R(sin(M_PI*2*totalDay / 33));

	return 0;
}

