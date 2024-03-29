#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
char s[1001000];
int mod = 10009;
int len, k = 131;
ll _hash[1001000];
ll cal(int x, ll y)
{
    ll re = 1;
    while (x)
    {
        if (x & 1)
            re = (re * y) % mod;
        x >>= 1;
        y = (y * y) % mod;
    }
    return re;
}
bool check(int x)
{
    ll cc = cal(x, (ll)k);
    for (int i = (x << 1); i <= len; i += x)
        if ((_hash[i] - (_hash[i - x] * cc) % mod + mod) % mod != _hash[x])
            return false;
    return true;
}
int main()
{
    while (true)
    {
        scanf("%s", s + 1);
        len = strlen(s + 1);
        if (len == 1 && s[1] == '.')
            return 0;
        for (int i = 1; i <= len; i++)
            _hash[i] = (_hash[i - 1] * k + s[i]) % mod;
        for (int i = 1; i <= len; i++)
            if (len % i == 0 && check(i))
            {
                printf("%d\n", len / i);
                break;
            }
    }
    return 0;
}