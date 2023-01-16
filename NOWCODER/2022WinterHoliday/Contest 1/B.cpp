#include <bits/stdc++.h>
using namespace std;
int m;
long long total = 0;
int find(int n, int x, int y, int score)
{
    if (n == 0)
    {
        if (score >= m)
            ++total;
        return 0;
    }
    for (int i = 0; i <= x; i++)
    {
        for (int t = 0; t <= y; t++)
        {
            if (i > t)

                find(n - 1, x - i, y - t, score + 3);

            else if (i < t)

                find(n - 1, x - i, y - t, score);

            else

                find(n - 1, x - i, y - t, score + 1);
        }
    }
    return 0;
}
int main()
{
    int n, x, y;
    cin >> n >> m >> x >> y;
    find(n,x,y,0);
    cout<<total%998244353;
    return 0;
}