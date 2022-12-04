#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int main()
{
    int n;cin>>n;
    string bie("bie");
    while(n--)
    {
        int index=0;
        int m;cin>>m;
        while(m--)
        {            
            string temp;
            cin>>temp;
            if(!(temp.find(bie,0)==-1))
            {
                bool flag=true;
                for(auto i:v)
                {
                    if(i==temp)
                        flag=false;
                }
                if(flag)
                {
                    v.push_back(temp);
                    cout<<temp<<endl;
                    index++;
                }
            }
        }
        if(index==0)
        cout<<"Time to play Genshin Impact, Teacher Rice!\n";
    }
    return 0;
}