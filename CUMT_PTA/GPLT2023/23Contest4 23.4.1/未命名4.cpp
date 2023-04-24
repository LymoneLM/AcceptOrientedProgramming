#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int in[4][2],low,delta;
	mm(in);
	for(int i=0;i<4;i++) cin>>in[i][0];
	cin>>low>>delta;
	
	int all=0,max=-1;
	for(int i=0;i<4;i++){
		if(in[i][0]<low){			
			in[i][1]=1;
		}
		max=(in[i][0]>max?in[i][0]:max);
	}
	for(int i=0;i<4;i++){
		if(max-in[i][0]>delta)
			in[i][1]=1;
	}
	for(int i=0;i<4;i++){
		all+=in[i][1];
	}
	
	if(all==0)
		cout<<"Normal";
	else if(all==1){
		for(int i=0;i<4;i++)
			if(in[i][1])
				printf("Warning: please check #%d!",i+1);
	}	else {
		cout<<"Warning: please check all the tires!";
	}
	

	return 0;
}
