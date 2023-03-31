#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

const int move1[4][2] = {{1, 0}, {1, 1}, {0, 1}, {1, -1}};
const int move4[4][2] = {{4, 0}, {4, 4}, {0, 4}, {4, -4}};
int game[19][19];
int find(const int i, const int j) {
    for (int t = 0; t < 8; t++) {
        if ((i + move4[t][0] >= 0) && (i + move4[t][0] < 19) && (j + move4[t][1] >= 0) && (j + move4[t][1] < 19)) {
            int ti = i, tj = j;
            bool flag = true;
            for (int k = 0; k < 4; k++) {
                ti += move1[t][0], tj += move1[t][1];
                if (game[i][j] != game[ti][tj])
                    flag = false;
            }
            ti += move1[t][0], tj += move1[t][1];
            if (flag && ((ti < 0 || ti >= 19) || (tj < 0 || tj >= 19) || game[ti][tj] != game[i][j]))
                return game[i][j];
        }
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        for (int j = 0; j < 19; j++)
            for (int i = 0; i < 19; i++)
                cin >> game[i][j];
        int out, i, j;
        for (i = 0; i < 19; i++)
            for (j = 0; j < 19; j++) {
                if (game[i][j]) {
                    out = find(i, j);
                    if (out)
                        goto win;
                }
        }
        cout << 0 << endl;
        continue;
    win:
        cout << out << endl
             << j + 1 << ' ' << i + 1 << endl;
    }

    return 0;
}