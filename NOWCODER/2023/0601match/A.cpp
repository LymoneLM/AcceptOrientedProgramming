#include <bits/stdc++.h>
#pragma GCC optimize(2)
#define endl "\n"
#define ll long long
#define mm(a) memset(a,0,sizeof(a))
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    char c,ans[30];
    int cnt[256];
    mm(cnt);
    cin>>c>>n;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++){
            sprintf(ans,"%d*%d=%d,",j,i,i*j);
            for(int l=0;l<strlen(ans);l++)
                cnt[ans[l]]++;
        }
    cout<<cnt[c];
    return 0;
}