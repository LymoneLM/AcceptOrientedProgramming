#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    
    int N;char c;
    string data;
    cin>>N>>c;
    getchar();
    getline(cin,data);

    int len = data.length();

    if(N>=len){

        len = N-len;

        for(int i=0;i<len;i++)
            cout<<c;
        cout<<data;
    }else{
        int index=len-N;
        for(int i=index;i<len;i++)
            cout<<data[i];
    }
    return 0;
}