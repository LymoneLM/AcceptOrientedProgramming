#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define endl '\n'
#define ll long long 
using namespace std;
class queu{
	public:
	int dat[10100];
	int N,p;
	queu(){
		N=0;
		p=0;
	}
	void push(int a){
		dat[N++]=a;
	}
	int front(){
		return dat[p];
	}
	void pop(){
		p++;
	}
	int size(){
		return N-p;
	}
};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M,K;
	cin>>N>>M>>K;
	stack<int> box;
	queu qu;
	
	int temp;
	for(int i=0;i<N;i++){
		cin>>temp;
		qu.push(temp);
	}
	
	int cnt=0,bef;
	while(qu.size()!=0||box.size()!=0){
		if(cnt==0){
			if(box.size()==0){
				bef=qu.front();
				qu.pop();
			} else{
				bef=box.top();
				box.pop();
			}
		} else {
			if(box.size()!=0&&box.top()<=bef){
				bef=box.top();
				box.pop();
			} else {
				while(qu.front()>bef&&box.size()<M&&qu.size()>0){
					box.push(qu.front());
					qu.pop();
				}
				if(qu.front()<=bef){
					bef=qu.front();
					qu.pop();
				} else {
					cout<<"\n";
					cnt=0;
					continue;
				}
			}	
		}
		cout<<bef; 
		cnt++;
		if(cnt==K){
			cnt=0;
			cout<<"\n";
		} else{
			cout<<" ";
		}
			
		
	}
	return 0;
}
/*
#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M,K;
	cin>>N>>M>>K;
	queue<int> qu;
	stack<int> box;
	int temp;
	for(int i=0;i<N;i++){
		cin>>temp;
		qu.push(temp);
	}
	int cnt=0,bef;
	while(qu.size()!=0||box.size()!=0){
		if(cnt==0){// first time
			if(box.size()==0){//box = 0
				bef=qu.front();
				qu.pop();
			} else{
				bef=box.top();
				box.pop();
			}
		} else {//N times
			if(box.size()!=0&&box.top()<=bef){//box top 符合 
				bef=box.top();
				box.pop();
			} else {//top不符合 
				while(box.size()<=M&&qu.size()>0&&qu.front()>bef){
					box.push(qu.front());
					qu.pop();
				}//直到符合或者满或者空 
				if(qu.front()>bef){//找到了 
					bef=qu.front();
					qu.pop();
				} else if(box.size()==M||qu.size()==0){//满或者空了
					cout<<"\n";
					cnt=0;
					continue;//置空，下一轮 
				}
			}	
		}
		cout<<bef; 
		cnt++;
		if(cnt==K){
			cnt=0;
			cout<<"\n";
		} else{
			cout<<" ";
		}
			
		
	}
	return 0;
}
*/
