#include<bits/stdc++.h>
using namespace std;
char s[1e5+4];
map<int,int>mp;
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",s+1);
	int tmp=0;
	int ans=0;
	int ling =0,yi=0;
	mp[0]=0;
	for(int i=1;i<=n;i++){
		if(s[i]=='1')tmp++,yi++;
		else tmp--,ling++;
		if(!mp.count(tmp)){
			mp[tmp]=i;
		}
		else
		ans=max(ans,i-mp[tmp]);
	}
	printf("%d %d\n",ans,2*min(ling,yi));
	return 0;
}

