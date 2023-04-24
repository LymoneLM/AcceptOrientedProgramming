#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;
const int way[4][2] = {{-1, 1}, {0, 1}, {1, 1}, {1, 0}};
int game[21][21];
inline bool law(int x, int y) {
    return !(y > 19 || x > 19 || x < 1 || y < 1);
}
bool find(int x, int y) {
    int th = game[x][y];
    for (int i = 0; i < 4; i++) {
        if (!law(x + 4 * way[i][0], y + 4 * way[i][1]))
            continue;
        if (th == game[x - way[i][0]][y - way[i][1]] || th == game[x + 5 * way[i][0]][y + 5 * way[i][1]])
            continue;
        for (int t = 1; t <= 4; t++)
            if (th != game[x + t * way[i][0]][y + t * way[i][1]])
                goto fend;
        return true;
        fend:;
    }
    return false;
}
int main() {
    mm(game);
    int T;
    cin >> T;
    while (T--) {
        for (int i = 1; i <= 19; i++)
            for (int t = 1; t <= 19; t++)
                scanf("%d", &game[i][t]);
        for (int i = 1; i <= 19; i++)
            for (int t = 1; t <= 19; t++)
                if (game[i][t] && find(i, t)) {
                    printf("%d\n%d %d\n", game[i][t], i, t);
                    goto end;
                }
        printf("0\n");
    end:;
    }
    return 0;
}