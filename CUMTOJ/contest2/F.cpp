#include <iostream>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
int pri[1000000];
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main() {

    long long m,k;
    while(cin>>m){   
        cin>>k;
        int i,j;
        for(i=1,j=0;i<=m;i++){
            if(gcd(m,i)==1)
                pri[j++]=i;
        }
        if(k%j!=0)
            cout<<k/j*m+pri[k%j-1]<<endl;
        else
            cout<<(k/j-1)*m+pri[k%j-1]<<endl;
    }

    return 0;
}