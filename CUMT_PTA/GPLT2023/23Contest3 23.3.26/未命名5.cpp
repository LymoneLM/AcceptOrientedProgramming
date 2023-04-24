#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std; 

struct person{
	int father;
	double ak;
	int times;
};
person data[100100];
double all=0,r;
double find(int no){
	if(!data[no].ak)
		data[no].ak=find(data[no].father)*r;
	return data[no].ak;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
		
	int N;double Z;
	cin>>N>>Z>>r;
	r=1-r/100;
	
	mm(data);
	data[0].ak=Z;
	
	int T,temp;
	for(int i=0;i<N;i++){
		cin>>T;
		if(T==0){
			cin>>temp;
			data[i].times=temp;
			continue;
		}
		while(T--){
			cin>>temp;
			data[temp].father=i;
			}
	}
	for(int i=0;i<N;i++){
		if(data[i].times){
			all+=find(i)*data[i].times;
		}
	}
	cout<<int(all);
	return 0;
}
