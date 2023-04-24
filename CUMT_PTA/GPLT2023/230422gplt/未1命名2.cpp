#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;

int main() {

	int N;
	cin>>N;
	int A[110],B[110],pa=0,pb=0;
	int cnt=0,max=0;
	int temp;
	while(N--) {
		cin>>temp;
		if(pa==0||temp<A[pa]) {
			A[++pa]=temp;
		} else {
			if(pb==0||temp>B[pb]) {
				B[++pb]=temp;
			} else {
				cnt++;
				if(pa>max) max=pa;
				pa=0;
				while(pa==0||temp<B[pb]) {
					A[++pa]=B[pb];
					pb--;
				}
				A[++pa]=temp;
			}
		}
	}
	if(pa) {	
		if(pa>max) max=pa;
		cnt++;
	}
	if(pb) {
		if(pb>max) max=pb;
		cnt++;
	}
	cout<<cnt<<" "<<max;
	return 0;
}
