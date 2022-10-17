#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[10001][9];double sum=0;
    int minnum;
    double mindelta=100000000;
    int data[10001];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%s %d",&name[i],&data[i]);
        sum+=data[i];
    }
    sum/=N,sum/=2;
    for(int i=0;i<N;i++)
    {
        double delta=fabs(data[i]-sum);
        if(delta<mindelta)
        {
            mindelta=delta;
            minnum=i;
        }
    }
    printf("%.0lf %s",sum,name[minnum]);
    return 0;
}