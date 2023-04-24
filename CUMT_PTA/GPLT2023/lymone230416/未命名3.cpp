#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a,b;
	cin>>a>>b;
	int A,B;
	A=max(a,b);
	A=(A<0?0:A);
	B=(a+b<0?0:a+b);
	cout<<A<<" "<<B<<endl;
	if(A==0)
		cout<<"-_-";
	else if(A<=B)
		cout<<"^_^";
	else 
		cout<<"T_T";
	return 0;
}
