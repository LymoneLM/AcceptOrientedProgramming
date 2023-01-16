#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        m = n * n - 1;
        int A = 0, B = 0;
        char d[4];
        for (int i = 0; i < m; i++)
        {
            scanf("%s", d);
            for (int i=0;i<4;i++)
            {   
                if (d[i] == '2')
                    ++A;
                if (d[i] == '1')
                    ++B;
            }
        }
        printf("%d\n", 10 + B - A);
    }
    return 0;
}