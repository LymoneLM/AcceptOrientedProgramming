#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin>>N;
	ll data[100100];
	for(int i=0;i<N;i++){
		cin>>data[i];
	}
	sort(data,data+N);
	int half=N/2;
	ll l=0,r=0;
	for(int i=0;i<half;i++) 
		l+=data[i];

	for(int i=N-1;i>=half;i--) 
		r+=data[i];	

		cout<<"Outgoing #: "<<N-half<<endl;
		cout<<"Introverted #: "<<half<<endl;
		cout<<"Diff = "<<r-l;

		
	return 0;
}
