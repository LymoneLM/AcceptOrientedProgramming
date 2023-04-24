#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = unsigned long long;

bool is_prime(ll A){
    if(A<=1)
        return false;
    for(ll i=2;i<=sqrt(A);i++){
        if(A%i==0)
        return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin>>T;
    ll temp;
    while(T--){
        cin>>temp;
        if(is_prime(temp))
        cout<<"Yes";    
        else cout<<"No";
        cout<<"\n"[(T==0)?1:0];
    }
    return 0;
}