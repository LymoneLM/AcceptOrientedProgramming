#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M;
	cin>>N>>M;
	bool mem[10010][10010];
	mm(mem);
	int a,b;
	while(M--){
		cin>>a>>b;
		mem[a][b]=mem[b][a]=true;
	}
	int K;
	cin>>K;
	int ans[10010][10010];
	
	return 0;
}
