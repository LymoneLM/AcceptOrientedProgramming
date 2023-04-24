#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
char dat[220],temp[220];
int findp(char *A,char *B){
	int len=strlen(dat),lel=strlen(A),ler=strlen(B);
	len-=(lel+ler-1);
	strcat(A,B);
	ler+=lel;
	for(int i=0;i<len;i++){
		if(dat[i]==A[0]){
			bool flag=true;
			for(int t=1;t<ler;t++){
				if(dat[i+t]!=A[t]){
					flag=false;
					break;
				}
			}
			if(flag){
				return i+lel;
			}
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	cin>>dat;
	int N;
	cin>>N;
	while(N--){
		int n,m;
		char ls[220],rs[220];
		cin>>n>>m>>ls>>rs;
		int x=0;
		for(int i=n-1;i<m;i++)
			temp[x++]=dat[i];
		temp[x]=dat[n-1]='\0';
		strcat(dat,dat+m);
		int k=findp(ls,rs);
		if(k){
			strcat(temp,dat+k);
			dat[k]='\0';
		}
		strcat(dat,temp);

	}
	cout<<dat;
	return 0;
}
