#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll mod=ll(1e9+7);
    ll all=0;
    ll n;cin>>n;
    ll half=n/2;
    for(ll i=1;i<=half;i++)
        all+=i*(n-i)*2,all%=mod;
    if(n%2!=0)
        all+=n/2*(n/2+1),all%=mod;
    cout<<all;
    return 0;
}