#include <bits/stdc++.h>
using namespace std;
int main()
{
	char time[5];
	int hh,mm;
	scanf("%s",&time);
	hh+=(time[0]-'0'),hh*=10,hh+=(time[1]-'0');
	mm+=(time[3]-'0'),mm*=10,mm+=(time[4]-'0');
	if(hh>=0&&hh<12||hh==12&&mm==0)
	{
		printf("Only %s.  Too early to Dang.",time);
		return 0;
	}
	hh-=12;
	if(mm>0)
	{
		hh++;
	}
	for(int i=0;i<hh;i++)
		printf("Dang");
	return 0;
}
