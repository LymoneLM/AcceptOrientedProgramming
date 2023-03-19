#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int H, W;
    while (N--) {
        cin >> H >> W;
        double stdW = (H - 100) * 1.8;
        double stdD = stdW * 0.1;

        if (abs(W - stdW) < stdD)
            cout << "You are wan mei!" << endl;
        else {
            if (W - stdW >= stdD)
                cout << "You are tai pang le!" << endl;
            else
                cout << "You are tai shou le!" << endl;
        }
    }

    return 0;
}