#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
char temp[100];
bool find(char* f){
	int len=strlen(temp);
	int slen=strlen(f);
	int max=len-slen+1;
	for(int i=0;i<max;i++){
		if(temp[i]==f[0]){
			bool flag=true;
			for(int t=1;t<slen;t++)
				if(f[t]!=temp[i+t]){
					flag=false;
					break;
				}
			if(flag)
				return true;
		}
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	

	int all=0,like=0,first=0;
	while(true){
		cin.getline(temp,100);
		int len=strlen(temp);
		if(len==1&&temp[0]=='.')
			break;
		all++;
		char fstr[20]="chi1 huo3 guo1"; 
		if(find(fstr)){
			if(!first) first=all;
			like++;
		}
	}
	cout<<all<<endl;
	if(like==0)
		cout<<"-_-#";
	else
		cout<<first<<" "<<like;
	

	return 0;
}
