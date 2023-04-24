#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<ctime>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 1000005
#define MOD 1e9+7
#define E 1e-6
#define LL long long
using namespace std;
int a[N];
int GCD(int x,int y)
{
    if(y==0)
        return x;
    else
        return GCD(y,x%y);
}
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        int j=0;
        for(int i=1;i<=n;i++)
            if(GCD(n,i)==1)
                a[j++]=i;
 
        if(k%j)
            printf("%d\n",k/j*n+a[k%j-1]);
        else
            printf("%d\n",(k/j-1)*n+a[j-1]);
    }
 
    return 0;
}
 
————————————————
版权声明：本文为CSDN博主「Alex_McAvoy」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/u011815404/article/details/81583521