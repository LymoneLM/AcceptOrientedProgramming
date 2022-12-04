#include <bits/stdc++.h>
#define MAXN 100001
using namespace std;
int n;
double sum=0;
bool special1(int* data)
{
    //bool flag=true;
    for(int i=1;i<n;i++)
    {
        if(data[i]*2!=data[0])
        {
            return false;
        }       
    }
    return true;
}
int main()
{
    int data[MAXN]={};
    scanf("%lld",&n);
    int temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        //data.push_back(temp);
        data[i]=temp;
        sum+=temp;
    }
    if(special1(data))
    {
        for(int i=0;i<n;i++)
        {
        printf("%lf%c",double(data[i]),((i==n-1)?'\n':' '));
        }
        return 0;
    }
    else
    {
        sum=sum/n;
        for(int i=0;i<n;i++)
        {
        printf("%.9lf%c",sum,((i==n-1)?'\n':' '));
        }
        /*
        for(int i=0;i<n;i++)
        {
        cout<<sum<<((i==n-1)?'\n':' ');*/
        //printf("%lf%c",sum,((i==n-1)?'\n':' '));
        //}
    }
    return 0;
}