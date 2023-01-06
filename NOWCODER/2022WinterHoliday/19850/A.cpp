#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void func(int num,bool* data)
{
    for(int i=1;i<=num;i++)
    {
        if(data[i]==false)goto p;
    }
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
    return;
    p:
    for(int i=1;i<=num;i++)
    {
        if(data[i]==false)
        {
            v.push_back(i);
            data[i]=true;
            func(num,data);
            data[i]=false;
            v.pop_back();
        }
    }
}
int main()
{
    bool data[9]={};
    func(8,data);
    return 0;
}