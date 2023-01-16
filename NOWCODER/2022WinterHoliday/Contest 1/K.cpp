#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    cout << max(m - ((n - m) / 2) - 1 + (n == m ? -1 : 0), 0);
    return 0;
}