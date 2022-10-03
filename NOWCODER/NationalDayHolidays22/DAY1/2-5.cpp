#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	long long Res=0,sec,Sum,Start,Max_a = 0;
	string s;
	cin>>N;
	getchar();
	getline(cin,s);
	int i=0;
	while(i<N)
	{
		Max_a+=(s[i]-'0');
		i++;
	}
	for (int i=0;i<N;i++)
	{
		Sum = 0;
		Start = i;
		while (Start<N)
		{
			Sum+=s[Start]-'0';
			if (s[Start]=='0') Sum--;
			if (Sum == 0) 
				Res = max(Res, Start-i+1);
			Start++;
		}
	}
	cout<<Res<<" "<<min(Max_a,N-Max_a)*2;
	return 0;
}
