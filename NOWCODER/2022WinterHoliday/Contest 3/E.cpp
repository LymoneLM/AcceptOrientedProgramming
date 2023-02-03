#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    if(ya-yb != xb-xa)
        cout<<"No Answer!";
    else
        cout<<xa<<yb;

    return 0;
}