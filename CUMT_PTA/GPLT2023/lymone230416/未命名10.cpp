#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define endl '\n'
#define ll long long 
using namespace std;
class timee{
	public:
	int hh,mm,ss;
	int hh2,mm2,ss2;
	bool operator < (timee A){
		if(hh!=A.hh)
			return hh<A.hh;
		if(mm!=A.mm)
			return mm<A.mm;
		return ss<A.ss;
	}
	bool operator == (timee A){
		if(hh2==A.hh&&mm2==A.mm&&ss2==A.ss)
			return true;
		return false;
	}
	void in(int a,int b,int c,int a1,int b1,int c1){
		hh=a,mm=b,ss=c;
		hh2=a1,mm2=b1,ss2=c1;
	}
};
int main(){
	
	int N;
	scanf("%d",&N);
	timee dat[100000];
	for(int i=0;i<N;i++)
		scanf("%d:%d:%d - %d:%d:%d",
		&dat[i].hh,&dat[i].mm,&dat[i].ss,&dat[i].hh2,&dat[i].mm2,&dat[i].ss2);
	dat[N].in(-1,0,0,0,0,0);
	dat[N+1].in(23,59,59,23,59,59);
		N+=2;
	sort(dat,dat+N);
	for(int i=0;i<N-1;i++){
		if(!(dat[i]==dat[i+1])){
			printf("%02d:%02d:%02d - %02d:%02d:%02d\n",
			dat[i].hh2,dat[i].mm2,dat[i].ss2,dat[i+1].hh,dat[i+1].mm,dat[i+1].ss);
		}
	}
	return 0;
}
