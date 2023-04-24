#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
const int ld[100]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int cube[3][3];
	int all=0;
	for(int i=0;i<3;i++)
		for(int t=0;t<3;t++){
			cin>>cube[i][t];
			all+=cube[i][t];
		}	
	int cube0=45-all;
	
	int x,y;
	for(int i=0;i<3;i++){
		cin>>x>>y;
		cout<<cube[x-1][y-1]<<endl;
	}
	
	for(int i=0;i<3;i++)
		for(int t=0;t<3;t++)
			if(cube[i][t]==0)
				cube[i][t]=cube0;
	int n;
	cin>>n;
	int cnt=0;
	if(n>=1&&n<=3)
		for(int i=0;i<3;i++)
			cnt+=cube[n-1][i];
	if(n>=4&&n<=6)
		for(int i=0;i<3;i++)
			cnt+=cube[i][n-4];
	if(n==7)
		for(int i=0;i<3;i++)
			cnt+=cube[i][i];
	if(n==8)
		for(int i=0;i<3;i++)
			cnt+=cube[i][2-i];
	cout<<ld[cnt-6];
	return 0;
}
