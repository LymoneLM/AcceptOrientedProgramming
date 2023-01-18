#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int dt[200010], mul[200010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, temp;
    ll all = 0;

    cin >> n;
    mul[1] = 1;
    for (int i = 2; i <= n; i++) {
        cin >> temp;
        mul[i] = mul[temp] + 1;
    }
    for (int i = 1; i <= n; i++) {
        cin >> dt[i];
    }
    sort(dt + 1, dt + n + 1, greater<ll>());
    sort(mul + 1, mul + n + 1, greater<ll>());
    for (int i = 1; i <= n; i++) {
        all += ll(mul[i]) * dt[i]; // 2e5*1e5>2e10
    }
    cout << all << endl;

    return 0;
}