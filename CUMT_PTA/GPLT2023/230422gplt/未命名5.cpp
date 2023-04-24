#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	int dat[110];
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>dat[i];
	int K;
	cin>>K;
	int temp;
	while(K--){
		temp=0;
		int te;
		for(int i=0;i<N;i++){
			cin>>te;
			if(te==0)
				continue;
			if(te==dat[i])
				temp++;
			else
				temp-=N;
		}
		if(temp>0)
			cout<<"Da Jiang!!!"<<endl;
		else
			cout<<"Ai Ya"<<endl;
	}
	
	return 0;
}
