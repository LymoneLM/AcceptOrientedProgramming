#include <bits/stdc++.h>
using namespace std;
int main()
{
	int _friend[101][101];
	int _energy[101][101];
	for(int i=1; i<=100; i++)
	{
		_friend[i][0]=0;
		_energy[i][0]=0;
	}
	int N,M,K;
	cin>>N>>M>>K;
	int p1,p2,rope;
	for(int i=0; i<M; i++)
	{
		cin>>p1>>p2>>rope;
		if(rope==1)
		{
			_friend[p1][0]++;
			_friend[p1][_friend[p1][0]]=p2;
			_friend[p2][0]++;
			_friend[p2][_friend[p2][0]]=p1;
		}
		if(rope==-1)
		{
			_energy[p1][0]++;
			_energy[p1][_energy[p1][0]]=p2;
			_energy[p2][0]++;
			_energy[p2][_energy[p2][0]]=p1;
		}
	}
	for(int i=0; i<K; i++)
	{
		
		bool is_friend=false,is_energy=false;
		
		cin>>p1>>p2;
		for(int xi=1; xi<=_friend[p1][0]; xi++)
		{
			if(_friend[p1][xi]==p2||is_friend)
			{
				is_friend=true;
				break;
			}
			for(int yi=1; yi<=_friend[p2][0]; yi++)
			{
				if(_friend[p1][xi]==_friend[p2][yi])
				{
					is_friend=true;
					break;
				}
			}
		}
		for(int xi=1; xi<=_energy[p1][0]; xi++)
		{
			if(_energy[p1][xi]==p2)
			{
				is_energy=true;
				break;
			}
		}
		for(int xi=1; xi<=_energy[p2][0]; xi++)
		{
			if(_energy[p2][xi]==p1)
			{
				is_energy=true;
				break;
			}
		}
		//10 00 11 01
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

