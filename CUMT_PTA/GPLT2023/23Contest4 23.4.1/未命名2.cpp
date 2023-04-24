#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
#define ll long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	double a;
	int b;
	double c;
	
	cin>>a>>b>>c;
	double rate=a*(b?1.26:2.455);
	
	
	printf("%.2lf %s",rate,(c<rate?"T_T":"^_^"));

	return 0;
}
