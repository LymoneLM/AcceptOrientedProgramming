#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int per[10010];

int find(int m){
    if(m==per[m])
        return m;
    per[m]=find(per[m]);
    return per[m];
}
void merge(int i,int j){
    per[find(j)]=find(i);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i=0;i<10010;i++)
        per[i]=i;
    set<int> stC,stM;
    int N,temp,pre;
    cin>>N;
    for(int i=0;i<N;i++){
        int T;
        cin>>T>>pre;
        stM.insert(pre);
        while(--T){
            cin>>temp;
            stM.insert(temp);
            merge(pre,temp);
        }     
    }
    
    for(auto i:stM){
        stC.insert(find(per[i]));
    }
    cout<<stM.size()<<" "<<stC.size()<<endl;

    int T;
    cin>>T;
    int p1,p2;
    while(T--){
        cin>>p1>>p2;
        if(find(p1)==find(p2))
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}