#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+100;
int b[N],block,num,id[N],tag[N],u[N],v[N];
int n,m,q;
long long sum[500][N],s[N];
void init(){
    int x,y;
    scanf("%d%d",&n,&m);
    block = sqrt(m);
    num = (m - 1) / block  + 1;
    for (int i = 1; i <= m; ++i)
        b[i] = (i - 1) / block + 1;
    for (int i = 1; i <= num; ++i){
        tag[i] = 1;
        for (int j = 0; j <= n; ++j)
            sum[i][j] = 0;
    }
    for (int i = 1; i <= n; ++i)
        s[i] = 0;
    for (int i = 1; i <= m; ++i){
        scanf("%d%d",&x,&y);
        u[i] = x; v[i] = y;
        sum[b[i]][x] ^= id[y];
        sum[b[i]][y] ^= id[x];
    }
}
void modify(int x, int y){
        for (int i = x; i <= min(y,b[x]*block); ++i){
        s[u[i]] ^= id[v[i]];
        s[v[i]] ^= id[u[i]];
    }
    if (b[x] != b[y])
        for (int i = (b[y] - 1) * block + 1; i <= y; ++i){
            s[u[i]] ^= id[v[i]];
            s[v[i]] ^= id[u[i]];
        }
    for (int i = b[x] + 1; i <= b[y] - 1; ++i)
        tag[i] ^= 1;
}
 
int main(){
    int op,x,y;
    srand(time(NULL));
    for (int i = 0; i < N; ++i) id[i] = rand() + 1;
    int T; scanf("%d",&T);
    while(T--){
        init();
        scanf("%d",&q);
        while(q--){
            scanf("%d%d%d",&op,&x,&y);
            if (op == 1) modify(x,y);
            if (op == 2){
                long long ans1 = s[x], ans2 = s[y];
                for (int i = 1; i <= num; ++i)
                    if (tag[i]) {
                        ans1 ^= sum[i][x];
                        ans2 ^= sum[i][y];
                    }
                putchar(ans1==ans2?'1':'0');
 
            }
        }
        putchar('\n');
    }
 
    return 0;
}
