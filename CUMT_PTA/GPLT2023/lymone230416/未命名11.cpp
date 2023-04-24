#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define endl '\n'
#define ll long long 
using namespace std;
string node[100000];
int find(string A){
	static int N=0;
	for(int i=0;i<N;i++){
		if(node[i]==A){
			return i;
		}
	}
	node[N++]=A;
	return N-1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M;
	cin>>N>>M;
	
	string per[10000];
	int nodecnt[100000];
	mm(nodecnt);
	int tree[100000];
	
	string temp[2];
	int itemp,A,B;
	while(M--){
		cin>>temp[0]>>temp[1];
		if(temp[0][0]>='0'&&temp[0][0]<='9'){
			itemp=0;
			for(int i=0;i<4;i++)
				itemp*=10,itemp+=temp[0][i]-'0';
			B=find(temp[1]);
			per[itemp]=B;
			nodecnt[B]++;
		} else {
			A=find(temp[0]);
			B=find(temp[1]);
			tree[A]=B;
		}
	}
	
	char ctrl;
	cin>>ctrl;
	while (ctrl!='E'){
		switch(ctrl){
			case 'T':
				cin>>itemp>>temp[0];
				break;
			case 'Q':
				cin>>temp[1];
		}
	}
	
	return 0;
}
