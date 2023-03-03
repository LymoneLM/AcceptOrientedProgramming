#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long n;
    while ((cin >> n) && n != 0) {
        unsigned int level = 4 << ((n - 1960) / 10);
        ll temp = 1;
        int i = 1;
        while ((log(temp) / log(2)) <= level) {
            temp *= ++i;
        }
        cout << i - 1 << endl;
    }

    return 0;
}