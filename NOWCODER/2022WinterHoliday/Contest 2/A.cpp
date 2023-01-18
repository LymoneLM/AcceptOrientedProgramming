#include <bits/stdc++.h>

using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T, n;
    int l1, r1, l2, r2;

    std::cin >> T;
    while (T--) {
        std::cin >> n;
        std::cin >> l1 >> r1 >> l2 >> r2;
        int xx, yy;
        bool flag = false;
        for (int i = l1; i <= r1; i++) {
            if(i+r2<n)
                continue;
            for (int t = l2; t <= r2; t++) {
                if (i + t == n) {
                    xx = i, yy = t;
                    flag = true;
                    goto a;
                }
            }
        }
    a:
        if (!flag) {
            std::cout << 0 << std::endl;
            continue;
        }
        std::cout << 1 + std::min(r1 - xx, yy - l2) + std::min(xx - l1, r2 - yy) << std::endl;
    }

    return 0;
}