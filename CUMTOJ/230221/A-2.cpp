#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T[1000010];
    ll N, M;
    cin >> N >> M;
    for (size_t i = 0; i < N; i++) {
        cin >> T[i];
    }
    sort(T, T + N, greater<int>());
    for (size_t i = 0; i < M; i++) {
        cout << T[i] << " ";
    }

    return 0;
}