#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin>>T;
    char data[200100];
    int n,d;
    while(T--){
        cin>>n>>d;
        cin>>data;
        int i=0;
        for(;i<n;i++){
            if(data[i]-'0'>=d)
                cout<<data[i];
            else
                break;
        }
        cout<<d;
        cout<<data+i<<endl;
    }

    return 0;
}