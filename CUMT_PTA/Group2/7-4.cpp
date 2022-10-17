#include <bits/stdc++.h>
using namespace std;
int main()
{
    char map[101][101];
    char nmap[101][101];
    string a_str;
    char ch;int N;
    //cin>>ch>>N;
    scanf("%c %d",&ch,&N);
    getchar();
    for(int i=0;i<N;i++)
    {
        getline(cin,a_str);
        for(int t=0;t<N;t++)
        {
            nmap[N-i-1][N-t-1]=map[i][t]=a_str[t];

        }
    }
    bool is_diff=false;
    for(int i=0;i<N;i++)
    {
        for(int t=0;t<N;t++)
        {
            if(map[i][t]!=nmap[i][t])
                is_diff=true;
        }
    }
    if(!is_diff)
        cout<<"bu yong dao le"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int t=0;t<N;t++)
        {
            if(nmap[i][t]=='@')
                cout<<ch;
            else
                cout<<' ';
        }
        cout<<endl;
    }   

    return 0;
}