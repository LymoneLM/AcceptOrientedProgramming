#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std; 
struct like{
	string name;
	int likes;
	bool operator < (like A){
		return likes>A.likes;
	}
};
int N;
string tname[5050];
bool find(string name){
	for(int i=0;i<N;i++){
		if(tname[i]==name)
			return true;
		if(tname[i]>name)
			return false;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
		
	cin>>N;	
	for(int i=1;i<=N;i++){
		cin>>tname[i];
	} 
	sort(tname,tname+N);
	int M;
	cin>>M;
	ll all=0;
	like st[10010];
	like temp;
	for(int i=0;i<M;i++){
		cin>>st[i].name>>st[i].likes;
		all+=st[i].likes;
	}
	ll avg=all/M;
	string ans[10010];
	int ansi=0;
	sort(st,st+M);
	for(int i=0;i<M;i++){
		if (st[i].likes<=avg)
			break;
		if (!find(st[i].name)){
			ans[ansi++]=st[i].name;
		}
	}
	if(ansi==0){
		cout<<"Bing Mei You"<<endl;
	} else {
		sort(ans,ans+ansi);
		for(int i=0;i<ansi;i++)
			cout<<ans[i]<<endl;
	}
	return 0;
}
