#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
stack<int> s1;
stack<char> s2;
int main(){


	int N;
	cin>>N;
	int tempi;char tempc;
	for(int i=0;i<N;i++){
		cin>>tempi;
		s1.push(tempi);
	}
	for(int i=0;i<N-1;i++){
		cin>>tempc;
		s2.push(tempc);
	}
	int a,b;char c;
	while(!s2.empty()){
		a=s1.top();
		s1.pop();
		b=s1.top();
		s1.pop();
		c=s2.top();
		s2.pop();
		int d;
		switch(c){
			case '+':
				d=a+b;
				break;
			case '-':
				d=b-a;
				break;
			case '*':
				d=a*b;
				break;
			case '/':
				if(a==0){
					printf("ERROR: %d/0",b);
					return 0;
				}
				d=b/a;
		}
		s1.push(d);
	}
	cout<<s1.top();
	return 0;
}
