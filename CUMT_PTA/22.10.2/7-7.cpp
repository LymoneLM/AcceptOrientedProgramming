#include <bits/stdc++.h>
using namespace std;
int main()
{
	int g,p,l,t;
	g=p=l=t=0;
	char data[10002];
	cin>>data;
	int i=0;
	while(data[i]!='\0')
	{
		switch (data[i])
		{
			case 'g':
			case 'G':
				g++;
				break;
			case 'p':
			case 'P':
				p++;
				break;
			case 'l':
			case 'L':
				l++;
				break;
			case 't':
			case 'T':
				t++;
				break;
		}
		i++;
	}
	while(g+p+l+t)
	{
		if(g)
		{
			printf("G");
			g--;
		}
		if(p)
		{
			printf("P");
			p--;
		}
		if(l)
		{
			printf("L");
			l--;
		}
		if(t)
		{
			printf("T");
			t--;
		}
	}

	return 0;
}
