#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T,n;
    ll temp,all;
    cin>>T;
    while(T--){
        cin>>n;
        all=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            all+=abs(temp)*2*n;
        }
        cout<<all<<endl;       
    }

    return 0;
}