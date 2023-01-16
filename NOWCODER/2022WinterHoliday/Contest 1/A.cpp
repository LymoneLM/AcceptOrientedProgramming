#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    char str[11];
    while(T--)
    {
        bool flag=false;
        int A=0,B=0;
        cin>>str;
        for(int i=1;i<=10;i++)
        {
            if(i%2==1)
            {
                if(str[i-1]=='1')
                    A++;
            }
            else
            {
                if(str[i-1]=='1')
                    B++;
            }
            if(i%2==1)
            {
                if(A+(10-i-1)/2<B||A>B+(10-i+1)/2)
                    {
                        cout<<i<<endl;
                        flag=true;
                        break;
                    }
            }
            else
            {
                if(A+(10-i)/2<B||A>B+(10-i)/2)
                    {
                        cout<<i<<endl;
                        flag=true;
                        break;
                    }
            }
        }
        if(flag==false)
            cout<<-1<<endl;
    }
}