#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
class uni{
	public:
	string name;
	int num,no;
	bool operator <(uni B){
		return num>B.num;
	}
};
bool cmp(uni A,uni B){
	return A.no<B.no;
}
int main(){
	
	int N,C;
	cin>>N>>C;
	uni dat[5010];
	int less[5010],p=0;
	
	for(int i=0;i<N;i++){
		cin>>dat[i].name>>dat[i].num>>dat[i].no;
	}
	sort(dat,dat+N);
	for(int i=0;i<N;i++){
		int cnt=dat[i].num/C;
		dat[i].num%=C;
		if(dat[i].num==0){
			dat[i].num=cnt;
			continue;
		}
			
		for(int t=0;t<p;t++){
			if(dat[i].num<=less[t]){
				less[t]-=dat[i].num;
				dat[i].num=0;
				break;
			}
		}
		
		if(dat[i].num!=0){
			less[p++]=C-dat[i].num;
		}
		dat[i].num=cnt+1;
	}
	sort(dat,dat+N,cmp);
	for(int i=0;i<N;i++)
		cout<<dat[i].name<<" "<<dat[i].num<<endl;
	return 0;
}
