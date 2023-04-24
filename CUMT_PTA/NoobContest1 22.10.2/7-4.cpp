//????????
#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool data[100001];
	//bool flag[100001];
	for(int i=0;i<=100000;i++)
	{
		data[i]=false;
		//flag[i]=false;
	}
	int temp;

	int N;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		int K;
		cin>>K;
		if(K<=1)
		{
			for(int t=0; t<K; t++)
			{
				cin>>temp;
			}
			continue;
		}
		for(int t=0; t<K; t++)
		{
			cin>>temp;
			data[temp]=true;
		}
	}

	int M;
	cin>>M;

	bool xflag=false;
	for(int i=0; i<M; i++)
	{
		cin>>temp;
		//if((!flag[temp])&&(!data[temp]))
		if(!data[temp])
		{
			if(xflag)
				cout<<" ";
			printf("%05d",temp);
			//cout<<temp;
			data[temp]=true;
			//flag[temp]=true;
			xflag=true;
		}
	}
	if(!xflag)
	{
		cout<<"No one is handsome";
	}

	return 0;
}
