#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std;
struct stu{
	string name;
	int score;
	bool operator < (stu A){
		if(score==A.score)
			return name<A.name;
		return score>A.score;
	}
}; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,G,K;
	cin>>N>>G>>K;
	
	stu __data[10010];
	ll all=0;
	for(int i=0;i<N;i++){
		cin>>__data[i].name>>__data[i].score;
		if(__data[i].score>=60){
			all+=20;
		}
		if(__data[i].score>=G){
			all+=30;
		}
	}
	sort(__data,__data+N);
	cout<<all<<endl;
	cout<<"1 "<<__data[0].name<<" "<<__data[0].score<<endl;
	int i=0,j=1;

	while(++i){
		if(__data[i].score!=__data[i-1].score)
			j=i+1;
		if(j>K)
			break;
		cout<<j<<" "<<__data[i].name<<" "<<__data[i].score<<endl;
	}
	return 0;
}

