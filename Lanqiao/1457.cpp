#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
#define ll long long
using namespace std;
const int MAXN=1000000;
int dat[MAXN];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll N;cin>>N;
    
    mm(dat);
    ll cnt=0,lvl=0;
    while(true){
        for(int i=0;i<=lvl;i++){
            cnt++;
            dat[i]+=(dat[i]==0?1:i);
            if(dat[i]==N){
                cout<<cnt;
                return 0;
            }
        }
        lvl++;
    }
    return 0;
}