#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;
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
int add[ola_maxn];
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    ola();
    mm(add);
    for (int i = 2; i < ola_maxn; i++) {
        if (ola_ispri[i]) {
            int all = 0, temp = i;
            while (temp) {
                all += temp % 10, temp /= 10;
            }
            if (ola_ispri[all]) {
                add[i]++;
            }
        }
        add[i] += add[i - 1];
    }
    int T;
    //cin>>T;
    scanf("%d", &T);
    int a, b;
    while (T--) {
        //cin>>a>>b;
        scanf("%d%d", &a, &b);
        if (a != 0)
            printf("%d\n",add[b]-add[a-1]);
            //cout << add[b] - add[a - 1] << endl;
        else
            printf("%d\n",add[b]);
            //cout << add[b] << endl;
    }
    return 0;
}