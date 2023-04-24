#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
bool way[510][510];
int nd,cnt=0,brk=0,N;
void find(int p){
	if(p==nd){
		cnt++;
		return;
	}
	int num=0;
	for(int i=1;i<=N;i++)
		if(way[p][i]){
			find(i);
			num++;
		}
	if(num==0)
		brk++;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int M;
	cin>>N>>M;
	mm(way);
	int x,y;
	for(int i=0;i<M;i++){
		cin>>x>>y;
		way[x][y]=true;
	}
	int start;
	cin>>start>>nd;
	find(start);
	cout<<cnt<<" ";
	if(brk==0)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
