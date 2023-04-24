#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define endl '\n'
#define ll long long 
using namespace std;
string win(string A){
	switch(A[0]){
		case 'C':
			return "Bu";
		case 'J':
			return "ChuiZi";
		case 'B':
			return "JianDao";
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	int rand[11]={0},max;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>rand[i];
		rand[i]+=rand[i-1];
		rand[i]++;
	}
	max=rand[N];
	int cnt=0;
	string A;
	cin>>A;
	while(A[0]!='E'){
		cnt++;
		cnt%=max;
		A=win(A);
		for(int i=0;i<N;i++){
			if(cnt==rand[i]){
				A=win(A);
				break;
			}				
		}
		cout<<A<<endl;
		cin>>A;
	}
	
	return 0;
}
