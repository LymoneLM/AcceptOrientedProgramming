#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
map<string,int> mp; 
set<string> st;
struct per{
	char name[20],id[20];
	int health;
	char time[20];
	bool operator <(per B){
		return (strcmp(time,B.time)<0?true:false);
	}
};
int main(){

	int D,P;
	scanf("%d%d",&D,&P);
	per dat[1010];
	string pos[100000][2];
	int poscnt=0;
	for(int i=1;i<=D;i++){
		int T,S;
		scanf("%d%d",&T,&S);
		for(int t=0;t<T;t++){
			cin>>dat[t].name>>dat[t].id>>dat[t].health>>dat[t].time;
			if(dat[t].health==1&&strlen(dat[t].id)==18&&st.count(dat[t].id)==0){
				st.insert(dat[t].id);
				pos[poscnt][0]=dat[t].name,pos[poscnt++][1]=dat[t].id;
			}
			if(dat[t].health==0&&st.count(dat[t].id)==1){
				st.erase(dat[t].id);
			}
		}
		sort(dat,dat+T);
		for(int cnt=0,t=0;cnt<S&&t<T;t++){
			if(strlen(dat[t].id)!=18)
				continue;
			if(mp.count(dat[t].id)!=0&&i<mp[dat[t].id]+P+1)
				continue;
			mp[dat[t].id]=i,cnt++;
			cout<<dat[t].name<<" "<<dat[t].id<<endl; 
		}	
	}
	for(int t=0;t<poscnt;t++){
		if(st.count(pos[t][1])==1)
			cout<<pos[t][0]<<" "<<pos[t][1]<<endl;
	}
			
	return 0;
}
