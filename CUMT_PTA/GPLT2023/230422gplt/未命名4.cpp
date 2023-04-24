#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if(c==a*b)
			cout<<"Lv Yan"<<endl;
		else if(c==a+b)
			cout<<"Tu Dou"<<endl;
		else
			cout<<"zhe du shi sha ya!"<<endl;
	}
	return 0;
}
