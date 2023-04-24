#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	int temp;
	int ji=0,ou=0;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		if(temp%2==0)
			ou++;
		else
			ji++;	
	}
	printf("%d %d",ji,ou);
	return 0;
}
