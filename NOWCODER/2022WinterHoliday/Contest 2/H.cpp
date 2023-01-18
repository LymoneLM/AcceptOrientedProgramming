#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T,n;
    int dt[100010];
    int bu[100010];
    while(T--){
        cin>>n;
        memset(bu,0,sizeof(int)*n);
        for (int i = 0; i < n; i++)
        {
            cin>>dt[i];
            ++bu[dt[i]];
        }
        sort(bu,bu+n,greater<int>());
        
    }

    return 0;
}