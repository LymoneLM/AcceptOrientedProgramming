// 欧拉筛模板
#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;
// 开始
const int ola_maxn = 1e6 + 10;
bool ola_ispri[ola_maxn];
int ola_pri[ola_maxn], ola_n = 0;
inline void ola() {
    memset(ola_ispri, true, sizeof(ola_ispri));
    ola_ispri[0] = ola_ispri[1] = false;
    for (int i = 2; i < ola_maxn; i++) {
        if (ola_ispri[i])
            ola_pri[ola_n++] = i;
        for (int j = 0; j < ola_n; j++) {
            if (i * ola_pri[j] >= ola_maxn)
                break;
            ola_ispri[i * ola_pri[j]] = false;
            if (i % ola_pri[j] == 0)
                break;
        }
    }
}
// 结束
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ola();

    return 0;
}