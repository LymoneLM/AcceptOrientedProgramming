#include <bits/stdc++.h>
#pragma GCC optimize(2)
#define endl "\n"
#define ll long long
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
struct store{
    int JB,CF;
    double rate;
    friend bool operator < (store A,store B){
        return A.rate < B.rate;
    }
};
int main() {
    
    int M,N;
    scanf("%d%d",&M,&N);
    store dat[1010];
    while(M!=-1&&N!=-1){
        int jb,cf;
        for(int i=0;i<N;i++){
            scanf("%d%d",&jb,&cf);
            dat[i].JB=jb,dat[i].CF=cf;
            dat[i].rate=double(cf)/jb;
        }
        sort(dat,dat+N);
        double cnt=0;
        for(int i=0;M>0&&i<N;i++){
            if(dat[i].CF<=M){
                cnt+=dat[i].JB;
                M-=dat[i].CF;
            } else {
                cnt+=dat[i].rate*M;
                break;
            }
        }
        printf("%.3lf\n",cnt);
        scanf("%d%d",&M,&N);
    }

    return 0;
}