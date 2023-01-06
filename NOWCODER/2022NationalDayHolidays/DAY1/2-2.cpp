#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	int fir=0,sec;
	char arry[100001];
	cin>>N;
	getchar();
	scanf("%s",&arry);	
	int max=0;
	int i=0;
	while(i<N)
	{
		max+=(arry[i]-'0');
		i++;
	}
	for(int start=0; start<N; start++)
	{
		for(int len=2; len<=N-start; len+=2)
		{
			int fmax=0;
			i=start;
			while(i<start+len)
			{
				fmax+=(arry[i]-'0');
				i++;
			}
			if(fmax*2==len&&len>fir)
				fir=len;	
		}
	}
	cout<<fir<<" "<<min(max,N-max)*2;
	return 0;
}
