#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
inline int icut(int a) {
	int t=0;
	while(a) {
		t+=a%10;
		a/=10;
	}
	return t;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	while(n--) {
		int na,nb;
		cin>>na>>nb;
		int sa=icut(na),sb=icut(nb);
		if((na%sb==0&&nb%sa==0)||(na%sb!=0&&nb%sa!=0)) {
			if(na>nb)
				cout<<"A\n";
			else
				cout<<"B\n";
		} else {
			if(na%sb==0)
				cout<<"A\n";
			else
				cout<<"B\n";
		}
	}

	return 0;
}
