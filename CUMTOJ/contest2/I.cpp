#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<double, pair<int,int>> val[1010];
    while (true) {
        int M, N;
        cin >> M >> N;
        if (M == -1 && N == -1)
            break;
        int cf, jb;
        for (int i = 0; i < N; i++) {
            cin >> jb >> cf;
            val[i] = make_pair(double(jb) / cf, make_pair(cf,jb));
        }
        sort(val, val + N, greater<pair<double, pair<int,int>>>());
        double all = 0;
        int i = 0;
        for (; M > val[i].second.first && i < N; i++) {
            all += val[i].second.second;
            M -= val[i].second.first;
        }
        if (!(i == N - 1))
            all += val[i].first * M;
        cout << setiosflags(ios::fixed) << setprecision(3) << all << endl;
    }

    return 0;
}