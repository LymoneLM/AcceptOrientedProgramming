#include <bits/stdc++.h>
using namespace std;
vector<string>temp;
vector<string>v;
int a[1000];
int countn=0;
int main()
{
    string temp;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) 
    {
        cin>>temp;
        v.push_back(temp);
    }
    while(q--)
    {
        countn=0;
        string diction;
        cin>>diction;
        for (int j=0;j<26;j++) a[diction[j]-'a']=j;
        /*for(int i=0;i<26;i++){
            char temp='a';
            m.insert(pair<char,char>(temp,diction[i]));
            temp++;
        }*/
        string stemp1="";
        vector<string>vtemp;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].length();j++){
                stemp1+=(char)(a[v[i][j]]+97);
            }
            vtemp.push_back(stemp1); 
            cout<<stemp1<<endl;
            stemp1.clear();
        }
        for(int i=0;i<vtemp.size();i++){
            for(int j=i+1;j<vtemp.size();j++){
                if(vtemp[i]<vtemp[j]){
                    countn++;
                    cout<<i+1<<" "<<j+1<<endl;
                }
            }
        }
        cout<<countn<<endl;
        m.clear();
    }
    return 0;
}