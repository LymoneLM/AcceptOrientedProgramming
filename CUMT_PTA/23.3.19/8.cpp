#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll ra,ca,rb,cb;
    ll cubea[110][110],cubeb[110][110],cubec[110][110];
    cin>>ra>>ca;
    for(int i=0;i<ra;i++)
        for(int j=0;j<ca;j++)
            cin>>cubea[i][j];
    cin>>rb>>cb;
    for(int i=0;i<rb;i++)
        for(int j=0;j<cb;j++)
            cin>>cubeb[i][j];
    if(ca!=rb){
        cout<<"Error: "<<ca<<" != "<<rb<<endl;
        return 0;
    }
    cout<<ra<<" "<<cb<<endl;
    for(int i=0;i<ra;i++)
        for(int j=0;j<cb;j++){
            ll temp=0;
            for(int x=0;x<ca;x++)
                temp+=cubea[i][x]*cubeb[x][j];
            cubec[i][j]=temp;
        }
    for(int i=0;i<ra;i++){
        for(int j=0;j<cb;j++)
            cout<<cubec[i][j]<<(j==cb-1?'\n':' ');
    }
    return 0;
}