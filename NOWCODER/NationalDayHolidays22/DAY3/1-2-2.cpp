#include <bits/stdc++.h>
 
using namespace std;
 
const int inf = 10000;
 
int getsum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n %10;
        n /= 10;
    }
    return sum;
}
 
int getdig(int n) 
{
    int cnt = 0;
    while(n)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m = getsum(n);
        int k = 0;
        for(int i = 2 ; i < inf ; i += 2)
        {
            if(i*m % n == 0)
            {
                k = i;
                break;
            }
        }
        if(k == 0)
        {
            cout << "Impossible\n";
            continue;   
        }
        int z = getdig(n);
        if(z*k <= inf)
        {
            for(int i = 0 ; i < k ; i++)
                cout << n;
            cout << "\n";
        }
        else
            cout << "Impossible\n";
    }
    return 0;
}

