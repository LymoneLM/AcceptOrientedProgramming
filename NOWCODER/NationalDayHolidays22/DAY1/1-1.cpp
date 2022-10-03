#include <bits/stdc++.h>
#define MAXM 1000
using namespace std;

struct Node
{
	int n;
	bool path[];
};

void graph()
{
	Node node[10000];
	int N,M;
	cin>>N>>M;
	int temp1,temp2;
	for(int i=0; i<N; i++)
		node[i].n=1;
	for(int i=0; i<M; i++)
	{
		cin>>temp1>>temp2;
		node[min(temp1,temp2)].path[max(temp1,temp2)]=true;
		node[temp1].n++;
		node[temp2].n++;
	}
	cin>>M;
	int temp;
	for(int i=0; i<M; i++)
	{
		cin>>temp>>temp1>>temp2;
		if(temp==1)
		{
			if(node[min(temp1,temp2)].path[max(temp1,temp2)])
			{
				node[temp1].n--,node[temp2].n--;
				node[min(temp1,temp2)].path[max(temp1,temp2)]=false;
				if(temp1==temp2)
					node[temp1].n++;
			}
			else
			{
				node[temp1].n++,node[temp2].n++;
				node[min(temp1,temp2)].path[max(temp1,temp2)]=true;
				if(temp1==temp2)
					node[temp1].n--;
			}

		}
		if(temp==2)
		{
			if(node[temp1].n==node[temp2].n)
				printf("1");
			else
				printf("0");
		}
	}
	printf("\n");
	return;
}

int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
		graph();
	return 0;
}
