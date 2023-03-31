#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000001;
int a[MAXN];
int main() {
    int n, m;
    while (~scanf("%d%d", &n, &m)) {
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++) {
            int t;
              // 此题数据多，如果用很慢的cin输入，肯定TLE
            a[500000 + t] = 1; // 数字t，登记在500000+t这个位置
        }
        for (int i = MAXN; m > 0; i--)
            if (a[i]) {
                if (m > 1)
                    printf("%d ", i - 500000);
                else
                    printf("%d\n", i - 500000);
                m--;
            }
    }
    return 0;
}