#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,v1,v2,v11;
    cin>>a>>v1>>v2>>v11;

    double time=0;
    int va=v1+v2;
    time=double(a)/va;
    time+=(a-time*v1)/v11;
    

    cout<<time;
    return 0;
}