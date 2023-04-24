#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	long l;
	scanf("%d %d %ld",&n,&m,&l);
	int fish[200001][2];
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&fish[i][0],&fish[i][1]);
		if(fish[i][1]>l)
		{
			i--,n--;
		}
	}
	int man[200001];
	/*
	for(int i=0; i<m; i++)
	{
		scanf("%d",&man);
		int sum=0;
		for(int i=0; i<n; i++)
		{
			if((abs(man-fish[i][0])+fish[i][1])<=l)
				sum++;
		}
		printf("%d\n",sum);
	}
	*/
	
	return 0;
}
