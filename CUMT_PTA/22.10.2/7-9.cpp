#include <bits/stdc++.h>
using namespace std;
class people
{
	public:
		double money;
		int num;
		bool print;
		people()
		{
			money=0;
			num=0;
			print=false;
		}
};
int main()
{
	people data[10001];
	int N;
	cin>>N;
	int K;
	int n;
	double m;
	for(int i=1; i<=N; i++)
	{
		cin>>K;
		for(int x=1; x<=K; x++)
		{
			cin>>n>>m;
			data[n].num++;
			data[n].money+=m;
			data[i].money-=m;
		}		
	}

	int pt_no;
	bool flag=true;
	for(int i=1; i<=N; i++)
	{
		data[i].money/=100;
	}
	for(int i=1; i<=N; i++)
	{
		for(int t=1; t<=N; t++)
		{
			if(data[t].print==false)
			{
				if(flag)
				{
					pt_no=t;
					flag=false;
					continue;
				}
				if(data[t].money>data[pt_no].money)
				{
					pt_no=t;
				}
				else if(data[t].money==data[pt_no].money)
				{
					if(data[t].num>data[pt_no].num)
					{
						pt_no=t;
					}
				}
			}
		}
		printf("%d %.2lf\n",pt_no,data[pt_no].money);
		//cout<<pt_no<<" "<<data[pt_no].money<<endl;
		data[pt_no].print=true;
		flag=true;
	}

	return 0;
}
