#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


class Node
{
	public:
		int x,y;
		Node()
		{
    	}
		bool operator<(const Node& other) const 
		{
			return ((x<other.x) || (!(other.x<x) && (y<other.y)));
		}
};



void graph()
{
	map<Node,bool>mp;
	int no[100001];
	int N,M;
	cin>>N>>M;
	Node tempN;
	bool tempB=true;
	int temp1,temp2;
	for(int i=1; i<=N; i++)
	{
		tempN.x=i;
		tempN.y=i;
		mp[tempN]=true;
		no[i]=1;
	}
	for(int i=0; i<M; i++)
	{
		cin>>temp1>>temp2;
		tempN.x=min(temp1,temp2);
		tempN.y=max(temp1,temp2);
		mp[tempN]=true;
		no[temp1]++;
		no[temp2]++;
	}


	cin>>M;
	int temp;
	for(int i=0; i<M; i++)
	{
		cin>>temp>>temp1>>temp2;
		if(temp==1)
		{
			tempN.x=min(temp1,temp2);
			tempN.y=max(temp1,temp2);
			if(mp.find(tempN) == mp.end()||mp[tempN]==false)
			{
				no[temp1]++,no[temp2]++;
				mp[tempN]=true;
				if(temp1==temp2)
					no[temp1]--;
			}
			else
			{
				no[temp1]--,no[temp2]--;
				mp[tempN]=false;
				if(temp1==temp2)
					no[temp1]++;
			}

		}
		if(temp==2)
		{
			if(no[temp1]==no[temp2])
				printf("1");
			else
				printf("0");
		}
	}
	mp.erase(mp.begin(), mp.end());
	printf("\n");
	return;
}

int main()
{
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
		graph();
	return 0;
}

