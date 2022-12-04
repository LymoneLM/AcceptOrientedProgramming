#include <bits/stdc++.h>
using namespace std;
double data[100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int fn=2022;
    while (fn--)
    {
        for(int i=0;i<n-1;i++)
        {
            data[i]/=2;
            data[i+1]+=data[i];
        }
        data[n-1]/=2;
        data[0]+=data[n-1];
        cout<<2022-fn<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}