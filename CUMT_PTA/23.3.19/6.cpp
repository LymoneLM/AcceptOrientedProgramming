#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll x,n=1,i=1;
    cin>>x;
    //TODO : 快速模
    while(n%x!=0){
        i++;
        n*=10,n+=1;
    }
    cout<<n/x<<" "<<i;
    return 0;
}