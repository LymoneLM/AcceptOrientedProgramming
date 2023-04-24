#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int> vc[6];
	int A[6],N;
	for(int i=0;i<6;i++)
		cin>>A[i];
	cin>>N;
	for(int i=0;i<6;i++){
		for(int t=6;t>=1;t--){
			if(t==A[i])
				continue;
			vc[i].push_back(t);
		}
	}
	int i=N-1;
		for(int t=0;t<6;t++){
			cout<<vc[t][i]<<" \n"[t==5?1:0];
		}

	
	return 0;
}
