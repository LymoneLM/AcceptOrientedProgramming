#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin>>N;
	
	double all=0,temp;
	for(int i=0;i<N;i++){
		cin>>temp;
		all+=pow(temp,-1);
	}
	all/=N;
	all=pow(all,-1);
	printf("%.2lf",all);
	
		

	return 0;
}
