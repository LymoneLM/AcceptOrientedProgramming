#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    ll temp, all = 0;
    cin >> n;
    while (n--) {
        cin >> temp;
        if (temp > 0) {
            while (temp % 2 == 0)
                temp = temp >> 1;
        }
        all += temp;
    }
    cout << all;

    return 0;
}
// 2147483648