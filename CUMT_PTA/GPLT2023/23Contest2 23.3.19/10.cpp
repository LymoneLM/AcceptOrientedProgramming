#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int data[100000][3];
    int data2[100000][3];
    int head, p;
    cin >> head >> p;
    int ad, da, ne;
    for (int i = 0; i < p; i++) {
        cin >> ad >> da >> ne;
        data[ad][0] = da;
        data[ne][1] = ad;
        data[ad][2] = ne;
    }
    int half = p / 2;
    return 0;
}