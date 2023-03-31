#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;
const int step[4][2] = {{-1, 1}, {0, 1}, {1, 1}, {1, 0}};
int game[20][20];
inline bool is_low(int x, int y) {
    if (x < 1 || x > 19 || y < 1 || y > 19)
        return false;
    return true;
}
bool is_way_low(int x, int y, int s) {
    int o = game[x][y];
    if (is_low(x - step[s][0], y - step[s][1]) && game[x - step[s][0]][y - step[s][1]] == o)
        return false;
    if (is_low(x + step[s][0] * 4, y + step[s][1] * 4)) {
        if (is_low(x + step[s][0] * 5, y + step[s][1] * 5) && game[x + step[s][0] * 5][y + step[s][1] * 5] == o)
            return false;
        for (int i = 0; i < 4; i++)
            if (game[x += step[s][0]][y += step[s][1]] != o)
                return false;
        return true;
    }
    return false;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        for (int i = 1; i < 20; i++)
            for (int j = 1; j < 20; j++)
                cin >> game[i][j];
        for (int i = 1; i < 20; i++)
            for (int j = 1; j < 20; j++)
                if (game[i][j] != 0)
                    for (int k = 0; k < 4; k++)
                        if (is_way_low(i, j, k))
                            cout << game[i][j] << endl
                                 << i << " " << j << endl;
    }

    return 0;
}