#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    int a[10010];
    int b[10010];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    bool flag;
    if (n % 2 != 0)
        flag = true;
    int t = 0;
    for (int i = 0; i < n; i += 2) {
        if (a[i] * a[i + 1] < a[i + 1] * a[i + 2])
            ++i;
        b[t++] = a[i] * a[i + 1];
    }
    sort(b, b + t, greater<int>());
    ll all = 0;
    for (int i = 0; i < k; i++) {
        all += b[i];
    }
    cout << all;
    return 0;
}