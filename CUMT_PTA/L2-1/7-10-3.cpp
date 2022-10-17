#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
    public:
    int father[101];
    //int rank[101];
    DisjointSet(int N)
    {
        for(int i=1;i<=N;i++)
        {
            father[i]=i;
            //rank[i]=1;
        }
    }
    int find(int x)
    {
        return father[x]==x ? x : (father[x]=find(father[x]));
    }
    void merge(int x,int y)
    {
        father[y]=find(x);
    }

};
int main()
{
    int N;cin>>N;
    DisjointSet T(N);
    bool energy[101][101]={{}};

    int M;cin>>M;
    int K;cin>>K;
    int temp1,temp2,rope;
    while(M--)
    {
        cin>>temp1>>temp2>>rope;
        if(rope==1)
            T.merge(temp1,temp2);
        else if(rope==-1)
        {
            energy[temp1][temp2]=true;
            energy[temp2][temp1]=true;
        }
    }
    while(K--)
    {
        bool is_friend=false,is_energy=false;
        cin>>temp1>>temp2;
        if(T.find(temp1)==T.find(temp2))
            is_friend=true;
        is_energy=energy[temp1][temp2];
        if(is_friend)
		{
			if(is_energy)
				cout<<"OK but..."<<endl;
			else
				cout<<"No problem"<<endl;
		}
		else
		{
			if(is_energy)
				cout<<"No way"<<endl;
			else
				cout<<"OK"<<endl;
		}
    }
    return 0;
}