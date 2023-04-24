#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,K,M;
    cin>>N>>K>>M;
    double score[10010];
    for(int i=0;i<N;i++){
        double all=0;
        int temp;
        int max=-1,min=101;
        for(int i =0;i<K;i++){
            cin>>temp;
            all+=temp;
            if(temp>=max)
                max=temp;
            if(temp<=min)
                min=temp;
        }
        all-=max,all-=min;
        score[i]=all/(K-2);
    }
    sort(score,score+N,greater<double>());
    for(int i=M-1;i>=0;i--)
        cout<<setiosflags(ios::fixed)<<setprecision(3)<<score[i]<<" \n"[i==0?1:0];
    return 0;
}