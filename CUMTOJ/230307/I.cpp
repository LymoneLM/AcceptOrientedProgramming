#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

const int N=2e5+10;
ll tid[N],id[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--){
        ll n,m,p;
        cin>>n>>m>>p;
        for(int i=1;i<=n;i++){
            cin>>id[i];
        }
        ll ans=1e18,sum=0;
        for(int i=1;i<=p;i++){
            ll a,b;
            cin>>a>>b;
            tid[i]=(id[a]-1-b+m)%m;
            sum+=tid[i];
        }
        sort(tid+1,tid+p+1);
        for(int i=1;i<=p;i++){
            ans=min(ans,sum+m*(i-1)-tid[i]*p);
        }
        cout<<ans<<endl;


    }  

    return 0;
} 