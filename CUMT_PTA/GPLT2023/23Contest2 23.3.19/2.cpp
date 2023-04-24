#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char data[20];
    cin>>data;
    data[5]='\0';
    for(int i=6;i<=9;i++)
        cout<<data[i];
    cout<<'-';
    cout<<data;

    return 0;
}