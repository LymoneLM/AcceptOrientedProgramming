#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll x, y;
    cin >> x >> y;
    cout << (abs(x - 2.7) > abs(y - 2.7) ? y : x);
    return 0;
}