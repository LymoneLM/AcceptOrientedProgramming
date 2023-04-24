#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;
struct st{
    string name;
    int K;
    int N;
    bool operator < (st t){
        if(N!=t.N)
            return N>t.N;
        else
            return K<t.K;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    st data[110];
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>data[i].name>>data[i].K;
        unordered_set<int> s;
        int temp;
        for(int j=0;j<data[i].K;j++){
            cin>>temp;
            s.insert(temp);
        }
        data[i].N=s.size();
    }  
    sort(data,data+T);
    if(T<3){
        for(int i=0;i<T;i++)
            cout<<data[i].name<<" ";
        for(int i=0;i<3-T;i++)
            cout<<'-'<<" \n"[(i==2-T?1:0)];
    }
    else
        for(int i=0;i<3;i++)
            cout<<data[i].name<<" \n"[(i==2?1:0)];
    return 0;
}