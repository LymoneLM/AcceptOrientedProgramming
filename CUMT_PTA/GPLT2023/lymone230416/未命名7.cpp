#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M,Q;
	cin>>N>>M>>Q;
	const int maxn = 100010;
	bool fl[2][maxn];
	mm(fl);
	int ct,temp;
	while(Q--){
		cin>>ct>>temp;
		fl[ct][temp]=1;
	}
	int xN=0,xM=0;
	for(int i=1;i<=N;i++)
		xN+=fl[0][i];
	for(int i=1;i<=M;i++)
		xM+=fl[1][i];
	cout<<(N-xN)*(M-xM);
	return 0;
}
