#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    int l, n;
    int temp;
    while (T--) {
        cin >> l >> n;
        double hl = l / 2.0, min = hl, max = 0;
        int minp = 1, maxp = 1;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            if (abs(temp - hl) < min) {
                min = abs(temp - hl);
                minp = temp;
            }
            if (abs(temp - hl) > max) {
                max = abs(temp - hl);
                maxp = temp;
            }
        }
        cout << (l - minp < minp ? l - minp : minp) << " ";
        cout << (l - maxp > maxp ? l - maxp : maxp) << endl;
    }

    return 0;
}