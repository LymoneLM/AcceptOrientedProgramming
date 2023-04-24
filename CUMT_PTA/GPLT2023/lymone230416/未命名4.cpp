#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int A,B;
	cin>>A>>B;
	A+=B;
	B=1;
	for(int i=1;i<=A;i++)
		B*=i;
	cout<<B;
	
	return 0;
}
