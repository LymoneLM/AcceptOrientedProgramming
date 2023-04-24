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
    string name;
    int low,high;
    while(T--){
        cin>>name>>low>>high;
        if(low<15||low>20||high<50||high>70)
            cout<<name<<endl;
    }

    return 0;
}