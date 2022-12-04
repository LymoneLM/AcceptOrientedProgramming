#include <bits/stdc++.h>
using namespace std;
vector<long long> s,d;
int main()
{
    long long n,m,sum=0;
    scanf("%lld%lld",&n,&m);
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    long long N=m-(sum%m);
    if (N==m) {cout<<0<<endl<<"0 0"<<endl;return 0;}
    long long C=n%m,D=((n*(n+1))/2)%m;
    int sn=0;
    long long ltemp=0;
    do
    {
        s.push_back(ltemp);
        ltemp=(++sn*C)%m;
        ltemp=(ltemp>N)?(ltemp-m):ltemp;
    }
    while(ltemp);
    int dn=0;
    ltemp=0;
    do
    {
        d.push_back(ltemp);
        ltemp=(++dn*D)%m;
        ltemp=(ltemp>N)?(ltemp-m):ltemp;
    }
    while(ltemp);

    long long min=N,minx=0,miny=0;
    long long xx=0;
    /*
    for(auto xi:s) cout<<xi<<" ";
    cout<<endl;
    for(auto yi:d) cout<<yi<<" ";
    cout<<endl;
    */
    for(auto xi:s)
    {
        long long yy=0;
        for(auto yi:d)
        {
            ltemp=abs(N-(xi+yi+((xi+yi)<0?m:0)));
            if(ltemp<min)
            {
                min=ltemp;
                minx=xx;
                miny=yy;
            }
            if(min==0) break;
            yy++;
        }
        if(min==0) break;
        xx++;   
    }
    cout<<min<<endl<<minx<<" "<<miny;
    return 0;
}