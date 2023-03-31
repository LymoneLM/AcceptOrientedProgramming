/*
尼姆博弈（Nimm Game)
解题思路：
最终状态：（1）最后剩下一堆石子；（必胜局面）
（2）剩下两堆，每堆一个；（必败局面）
（3）当石子剩下两堆，其中一堆只剩下1颗，另一堆剩下多于n颗石子时，当前取的人只需将多于1颗的那一堆取出n-1颗，则局面变为刚才提到的必败局面。（必胜局面）
判断当前局势是否为必胜（必败）局势：
1）把所有堆的石子数目用二进制数表示出来，当全部这些数按位异或结果为0时当前局面为必败局面，否则为必胜局面；
2）在必胜局面下，因为所有数按位异或的结果 是大于零的，那么通过一次取，将这个（大于其它所有数按位异或的结果的）数下降到其它所有数按位异或的结果，这时局面就变为必败局面了。

but!why？？？？？？？
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M;
    ll data[20],ans;
    while(cin>>M){
        for(int i=0;i<M;i++){
            cin>>data[i];
        }
        ans = data[0]^data[1];
        if(M>2)
        for(int i=2;i<M;i++){
            ans^=data[i];
        }
        if(ans)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}