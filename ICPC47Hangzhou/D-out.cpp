#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long double sum=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        sum+=temp;
    }
    double p=sum/(n+1);
    printf("%.9lf ",p*2);
    for(int i=1;i<n;i++)
    {
        printf("%.9lf%c",p,((i==n-1)?'\n':' '));
    }
    return 0;
}