#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;
const int ola_maxn = 1e7 + 10;
bitset<ola_maxn> ola_ispri;
vector<int> ola_pri;
inline void ola() {
    ola_ispri[0] = ola_ispri[1] = 1;
    for (int i = 2; i < ola_maxn; i++) {
        if (!ola_ispri[i])
            ola_pri.push_back(i);
        for (auto j : ola_pri) {
            if (i * j > ola_maxn)
                break;
            ola_ispri[i * j] = 1;
            if (i % j == 0)
                break;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ola();

    int temp;
    while(cin>>temp){
        if(temp<8){
            cout<<"Impossible.\n";
            continue;
        }
        if(temp%2){
            cout<<"2 3 ";
            temp-=5;
        } else {
            cout<<"2 2 ";
            temp-=4;
        }
        for(auto i:ola_pri){
            if(!ola_ispri[temp-i]){
                cout<<i<<" "<<temp-i<<endl;
                break;
            }
        }
    }

    return 0;
}