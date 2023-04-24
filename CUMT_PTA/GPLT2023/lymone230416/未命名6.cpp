#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool find(string A) {
	int len=A.size();
	char a[4]="PTA";
	for(int i=0; i<len; i++) {
		if(A[i]=='P') {
			if(A[i+1]=='T'&&A[i+2]=='A')
				return true;
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin>>N;
	cin.get();
	string A;
	while(N--) {
		getline(cin,A);
		if(A[A.size()-1]=='?')
			if(find(A))
				cout<<"Yes!\n";
			else
				cout<<"No.\n";
		else
			cout<<"enen\n";
	}

	return 0;
}
