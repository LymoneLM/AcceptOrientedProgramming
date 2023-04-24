#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E, K;
    int way[250000][2];
    int point[510];
    cin >> V >> E >> K;
    for (int i = 0; i < E; i++)
        cin >> way[i][0] >> way[i][1];
    int T;
    cin >> T;
    unordered_set<int> us;
end:
    while (T--) {
        us.clear();
        for (int i = 0; i < V; i++) {
            cin >> point[i];
            us.insert(point[i]);
        }
        if (us.size() > K) {
            cout << "No" << endl;
            goto end;
        }
        for (int i = 0; i < E; i++) {
            if (point[way[i][0]] == point[way[i][1]]) {
                cout << "No" << endl;
                goto end;
            }
        }
        cout << "Yes" << endl;
    }
    return 0;
}