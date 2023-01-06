#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	char arry[100001];
	cin>>N;
	scanf("%s",&arry);
	
	int max=0;
	int i=0;
	while(i<N)
	{
		max+=(arry[i]-'0');
		i++;
	}
	
	
	cout<<" "<<min(max,N-max)*2;
	return 0;
}

