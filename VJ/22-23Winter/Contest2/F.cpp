//POJ 2406 RE
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#define MAXN 1000001

using namespace std;

const int p = 21788233;
const int mod = 1e9 + 9;
char Data[MAXN];
int hashd[MAXN];
// use ascii as index
int myhash(int bef, char c)
{
    return (bef * p + c) % mod;
}
int _myhash(int fir, int sec) // fir->sec
{
    return (int(hashd[sec] - hashd[fir - 1] * pow(p, sec - fir + 1)) % mod + mod) % mod;
}
int main()
{
    while (true)
    {
        scanf("%s", Data);
        int len = strlen(Data);
        if (Data[0] == '.')
            break;
        hashd[0] = Data[0];
        for (int i = 1; i < len; i++)
            hashd[i] = myhash(hashd[i - 1], Data[i]);
        len /= 2;
        for (int i = 0; i < len; i++)
            if (hashd[i] == _myhash(i + 1, 2 * i + 1))
            {
                cout << i << endl;
                break;
            }
    }
    return 0;
}