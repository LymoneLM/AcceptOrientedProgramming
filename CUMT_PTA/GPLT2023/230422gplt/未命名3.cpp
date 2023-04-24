#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string X;int M,K;
	int N;
	cin>>N;
	cin>>X;
	cin>>M>>K;
	if(K==N)
		cout<<"mei you mai "<<X<<" de";
	else if(K==M)
		cout<<"kan dao le mai "<<X<<" de";
	else
		cout<<"wang le zhao mai "<<X<<" de";
	return 0;
}
