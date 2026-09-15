// 02_If_22  02_if_★★_DayOfYear
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

	while(read(0, buf, 1) != 0 && *buf != '\n'){
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

#include<stdio.h>
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

int main() {
	int d = stoi_free(stdinRead());
	int m = stoi_free(stdinRead());
	int y = stoi_free(stdinRead()) - 543;

	int year[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int countDays = 0;
	for(int i = 0; i < m-1; i++)
		countDays += year[i];

	countDays += d;
	write(1, "\n", 1);
	if ( y%4 == 0 && y%100 != 0 && m >= 2)
		countDays++;
	if ( y%400 == 0)
		countDays++;

	shownum(countDays);
	write(1, "\n", 1);
}
