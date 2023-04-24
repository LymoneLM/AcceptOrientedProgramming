#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
const int ola_maxn = 10010;
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
bool is_pri(int n){
    if(n<=10010)
        return ola_ispri[n];
    for(int i=0;i<ola_n;i++){
        if(n%ola_pri[i]==0)
            return false;
    }
    return true;
}
int main() {

    ola();

    int T;
    int dat[10010];
    scanf("%d",&T);
    while(T--){
        mm(dat);
        int n,temp;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&temp);
            dat[i]=dat[i-1]+temp;
        }
        for(int len=2;len<=n;len++){
            for(int k=1;k<=n-len+1;k++){
                int m=dat[k+len-1]-dat[k-1];
                if(is_pri(m)){
                    printf("Shortest primed subsequence is length %d:",len);
                    for(int i=0;i<len;i++){
                        printf(" %d",dat[k+i]-dat[k+i-1]);
                    }
                    printf("\n");
                    goto end;
                }
            }
        }
        printf("This sequence is anti-primed.\n");
        end:;
    }
    return 0;
}