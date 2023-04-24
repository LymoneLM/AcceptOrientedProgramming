//天梯选拔第二场补题
#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    int ans[1000],cnt=0;
    cin>>m>>n;
    for (int i=m;i<=n;i++){
        int k=i,temp=0;
        auto mul=[](int k){return k*k*k;};
        for(int t=0;t<3;t++)
            temp+=mul(k%10),k/=10;
        if(temp==i)
            ans[cnt++]=i;
    }
    if(cnt==0)
        cout<<"no";
    else {
        for(int i=0;i<cnt;i++)
        cout<<ans[i]<<" \n"[i==cnt-1?1:0];
    }
    return 0;
}