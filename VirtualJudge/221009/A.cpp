#include <bits/stdc++.h>
using namespace std;
bool is_p(long long n)
{
	bool is_ap=true;
	char str[20];
	sprintf(str, "%lld", n);
	int len=strlen(str),lmid=(len+1)/2;
	for(int i=0; i<lmid; i++)
	{
		if(str[i]!=str[len-i-1])
			is_ap=false;
	}
	return is_ap;
}
int main()
{
	int num=0;
	long long N;
	cin>>N;


	long long lmid=(N+1)/2;
	for(long long i=0; i<lmid; i++)
	{
		if(is_p(i)&&is_p(N-i))
			num++;
	}

	cout<<num*2;
	return 0;
}
