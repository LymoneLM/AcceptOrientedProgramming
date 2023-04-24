#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int V,E,K;
    cin>>V>>E>>K;
    int map[510],way[250100][2];
    for(int i=0;i<E;i++){
        cin>>way[i][0]>>way[i][1];
    }
    int N;
    cin>>N;
    set<int> mp;
    while(N--){
        mp.clear();
        for(int i=1;i<=V;i++){
            cin>>map[i];
            mp.insert(map[i]);
        }
        if(mp.size()!=K){
            cout<<"No\n";
            continue;
        }
        bool flag=true;
        for(int i=0;i<E;i++){
            if(map[way[i][0]]==map[way[i][1]])
                flag=false;
        }
        if(flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";
            
    }
    return 0;
}