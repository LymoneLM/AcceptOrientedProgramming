#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,M;
	cin>>N>>M;
	char ans[50];
	while(M--){
		cin>>ans;
		int all=0;
		for(int i=0;i<N;i++)
			if(ans[i]=='y')
				all*=2;
			else
				all*=2,all+=1;
		cout<<all+1<<endl;
	}

	return 0;
}
