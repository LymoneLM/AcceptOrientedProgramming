#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std; 
int mem[100010][2];
int find(int no){
	if(!mem[no][1]){
		mem[no][1]=find(mem[no][0])+1;
	}
	return mem[no][1];
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin>>N;
	
	mm(mem);
	for(int i=1;i<=N;i++){
		cin>>mem[i][0];
		if(mem[i][0]==-1)
			mem[i][1]=1;
	}
	int max=0;int reg=0;
	int ans[100010];
	for(int i=1;i<=N;i++){
		if(find(i)>max){
			max=mem[i][1];
			reg=0;
			ans[reg++]=i;
		} else if(mem[i][1]==max){
			ans[reg++]=i;
		}
	}	
	cout<<max<<endl;
	for(int i=0;i<reg;i++)
		cout<<ans[i]<<" \n"[(i==reg-1?1:0)];
	return 0;
}
