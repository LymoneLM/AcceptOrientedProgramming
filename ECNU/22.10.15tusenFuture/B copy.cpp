#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a[100001];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<a[0];
    for(int i=1;i<n;i++)
    {
        bool flag=true;
        for(int t=0;t<n;t++)
        {
            if(a[i]==a[t]&&i!=t)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<" "<<a[i];
    }
    return 0;
}