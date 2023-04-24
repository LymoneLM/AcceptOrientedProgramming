#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std; 
char source[500];
void pp(int level){
	while(level--)
		cout<<"  ";
}
void pab(int a,int b){
	for(int i=a;i<b;i++)
		cout<<source[i];
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin.getline(source,500);
	int level=1;
	int i=0;
	while(source[i]!='{') i++;
	pab(0,i);
	cout<<endl<<"{\n";
	int a,b=a=i+1;
	while(level){
		while(source[a]==' ')
			a++;
		b=a;
		if(source[a]=='}'){
			pp(level-1)
		}
		while(source[b]!=';')
			b++;
	}
	
	
	return 0;
}
