#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    double data[100001];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &data[i]);
    }
    sort(data,data+n);
    for (int x = 0; x < m; x++)
    {
        /*
        int ma = data[0];
        int na = 0;
        for (int i = 1; i < n; i++)
        {
            if (data[i] > ma)
            {
                ma = data[i];
                na = i;
            }
        }
        data[na] = data[na] / 2;
        */
        sort(data+n-x,data+n);
        data[n-1] = data[n-1] / 2;
    }
    for (int i = 0; i < n; i++)
    {
        sum += data[i];
    }
    printf("%lld", sum);
    return 0;
}