#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cmp(char *A, char *B) {
    if (A[0] == B[0])
        return 0;
    if ((A[0] == 'p' && B[0] == 'r') || (A[0] == 'r' && B[0] == 's') || (A[0] == 's' && B[0] == 'p'))
        return 1;
    return 2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    int data[110][2];
    while (cin >> n && n != 0) {

        cin >> k;
        memset(data, 0, sizeof(data));
        ll T = k * n * (n - 1) / 2;
        int A, B;
        char cA[10], cB[10];
        while (T--) {
            cin >> A >> cA >> B >> cB;
            switch (cmp(cA, cB)) {
            case 1:
                ++data[A][1];
                ++data[B][0];
                break;
            case 2:
                ++data[A][0];
                ++data[B][1];
                break;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (data[i][0] + data[i][1] != 0)
                cout << setiosflags(ios::fixed) << setprecision(3) << double(data[i][1]) / (data[i][0] + data[i][1]) << endl;
            else
                cout << "-" << endl;
        }
        cout << endl;
    }

    return 0;
}