#include <bits/stdc++.h>
using namespace std;
int main()
{
    char data[1001];
    cin.getline(data,1001);
    int len=strlen(data);
    for(int i=0;i<len;i++)
    {
        if(data[i]=='6')
        {
            int temp=0;
            while(data[(++temp)+i]=='6');--temp;
            if(temp>=9)cout<<27;
            else if(temp>=3)cout<<9;
            else for(int i=0;i<=temp;i++)cout<<6;
            i+=temp,temp=0;
        }
        else cout<<data[i];
    }
    return 0;
}