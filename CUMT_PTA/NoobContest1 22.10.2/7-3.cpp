#include <bits/stdc++.h>
using namespace std;
int main()
{
	int maxA,maxB;
	int nA=0,nB=0;
	cin>>maxA>>maxB;
	
	int N;cin>>N;
	int temp[101][5];
	for(int i=1;i<=N;i++)
	{
		for(int t=1;t<=4;t++)
		{
			cin>>temp[i][t];
		}
	}
	
	for(int i=1;i<=N;i++)
	{
		if((temp[i][1]+temp[i][3]==temp[i][2])xor(temp[i][1]+temp[i][3]==temp[i][4]))
		{
			nA+=(temp[i][1]+temp[i][3]==temp[i][2]);
			nB+=(temp[i][1]+temp[i][3]==temp[i][4]);
		}
		if(nA>maxA)
		{
			cout<<'A'<<endl<<nB;
			return 0;
		}
		if(nB>maxB)
		{
			cout<<'B'<<endl<<nA;
			return 0;
		}
	}
	return 0;
}
