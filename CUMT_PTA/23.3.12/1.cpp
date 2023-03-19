#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a[2][1000];
    bool flag[2] = {true,true};
    int num[2] = {0, 0};
    cin >> a[0];
    cin.get();
    cin.getline(a[1], 1000);

    for (int t = 0; t < 2; t++) {
        int len = strlen(a[t]);
        for (int i = 0; i < len; i++) {
            if (!(a[t][i] >= '0' && a[t][i] <= '9')) {
                flag[t] = false;
                break;
            } else {
                num[t] *= 10;
                num[t] += a[t][i] - '0';
            }
        }
        if (num[t] > 1000 || num[t] < 1)
            flag[t] = false;
    }
    if (flag[0])
        cout << num[0];
    else
        cout << "?";
    cout << " + ";
    if (flag[1])
        cout << num[1];
    else
        cout << "?";
    cout << " = ";
    if (flag[0] && flag[1])
        cout << num[0] + num[1];
    else
        cout << "?";
    return 0;
}