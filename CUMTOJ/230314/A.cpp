#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

const int maxn = 1e6 + 10;
bitset<maxn> isPri;
vector<int> primer;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    isPri[0]=isPri[1]=1;
    for (int i = 2; i < maxn ; i++) {
        if (!isPri[i])
            primer.push_back(i);
        for (auto j : primer) {
            if(i*j>maxn) break;
            isPri[i * j] = 1;
            if (i % j == 0)break;
        }
    }
    int temp;
    while (cin >> temp) {
        if (temp == 0)
            break;
        for (auto i : primer)
            if (!isPri[temp - i]) {
                cout << temp << " = " << i << " +" << temp - i << endl;
                break;
            }
    }
    return 0;
}