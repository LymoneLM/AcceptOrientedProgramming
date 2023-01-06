#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n;
    cin>>n;
    long long a[100001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(mp.count(a[i]) == 0)
            mp[a[i]]=1;
        else
            mp[a[i]]++;
    }
    for(int t=0;t<n;t++)
        if(mp[a[t]]==1)
        cout<<a[t]<<" ";
    return 0;
}