#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    ll N, M;
    cin >> N;
    int temp;
    char T[10010]={};
    for (size_t i = 0; i < N; i++)
    {
        cin>>temp;
        T[i]=char(temp);
    }
    cout<<T;
    return 0;
}