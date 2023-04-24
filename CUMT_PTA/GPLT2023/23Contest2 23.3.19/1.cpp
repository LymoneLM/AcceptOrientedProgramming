#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p;int i=0;
    int temp;
    while(cin>>temp){
        i++;
        if(temp==250){
            p=i;
            break;
        }
    }
    while(cin>>temp);
    cout<<p;

    return 0;
}