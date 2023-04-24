#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;

int main() {

	int N;
	cin>>N;
	stack<int> A,B;
	int cnt=0,max=0;
	int temp;
	while(N--) {
		cin>>temp;
		if(A.empty()||temp<A.top()) {
			A.push(temp);
		} else {
			if(B.empty()||temp>B.top()) {
				B.push(temp);
			} else {
				int bnt=0;
				cnt++;
				while(!A.empty()) {
					bnt++;
					A.pop();
				}
				if(bnt>max) max=bnt;
				while(A.empty()||temp<B.top()) {
					A.push(B.top());
					B.pop();
				}
				A.push(temp);
			}
		}
	}
	if(!A.empty()) {
		int bnt=0;
		cnt++;
		while(!A.empty()) {
			bnt++;
			A.pop();
		}
		if(bnt>max) max=bnt;
	}
	if(!B.empty()) {
		int bnt=0;
		cnt++;
		while(!B.empty()) {
			bnt++;
			B.pop();
		}
		if(bnt>max) max=bnt;
	}
	cout<<cnt<<" "<<max;
	return 0;
}
