#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAXN 1000001
int m[MAXN];

int main() {


    ll N, M;
    int temp;
    while (~scanf("%lld%lld", &N, &M)) {
        memset(m, 0, sizeof(int)*MAXN);
        while (N--) {
            scanf("%d", &temp); 
            ++  m[temp + 500000];
        }
        int i = MAXN;
        while (M) {
            if (m[i]) {
                printf("%d%c", i - 500000," \n"[M==1?1:0]);
                --m[i],--M;
            } else
                --i;
        }
    }
    return 0;
}