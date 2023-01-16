#include <bits/stdc++.h>
using namespace std;
long long d[100010];
bool cmp(int x, int y) {
    return x > y;
}
int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &d[i]);
        }
        sort(d + 1, d + n + 1, cmp);
        int all = 0, flag = 1;
        for (int i = 1; i <= n; i++) {
            if (d[i] < i - flag + 1) {
                long long x = i - flag;
                all += min(x, d[i - 1]);
                flag = i;
            }
        }
        long long x = n - flag + 1;
        all += min(x, d[n]);
        printf("%d\n", all);
    }
}