#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n0,n1,n;
	cin>>n0>>n1>>n;
	int a=n+1,b=-1;
	for(int i=1;i<n;i++){
		if(n0%i==0&&n1%(n-i)==0&&i!=n0&&(n-i)!=n1){
			if(abs(n0/i-n1/(n-i))<abs(a-b)){
				a=n0/i;
				b=n1/(n-i);
			}
		}
	}
	if(a==n+1)
		cout<<"No Solution"<<endl;
	else{
		cout<<n0/a<<" "<<n1/b<<endl;
	}
	return 0;
}
