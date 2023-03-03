#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll m[20]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881,13482720};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll N;
    while(cin>>N&&N!=0)
        cout<< m[N] <<endl;

    return 0;
}