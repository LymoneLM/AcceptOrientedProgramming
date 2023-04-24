#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
const int maxn=10010;
const int xs[4]={0,1,0,-1},ys[4]={1,0,-1,0};
int n,m;
int cmap[maxn][maxn];
int cnt=0,bnt=0;
bool flag=false;
inline bool is_law(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m)
		return true;
	return false;
}
void find(int x,int y){
	if(cmap[x][y]>1)
		flag=true;
	cmap[x][y]=0;
	for(int i=0;i<4;i++){
		if(is_law(x+xs[i],y+ys[i])&&cmap[x+xs[i]][y+ys[i]])
			find(x+xs[i],y+ys[i]);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>m;
	string A;
	for(int x=0;x<n;x++){
		cin>>A;
		for(int y=0;y<m;y++){
			cmap[x][y]=A[y]-'0';
		}
	}
	for(int i=0;i<n;i++){
		for(int x=0;x<m;x++){
			if(cmap[i][x]){
				cnt++;
				flag=false;
				find(i,x);
			}
			if(flag) bnt++;
		}
	}
	cout<<cnt<<" "<<bnt;
	return 0;
}
