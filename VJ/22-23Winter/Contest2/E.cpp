//POJ 2503
#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
map<string, string> mp;
int main()
{
    string temp;
    string key, word;
    stringstream ss;
    while (getline(cin, temp))
    {
        if (temp.empty())
            break;
        ss.clear();
        ss.str(temp);
        ss >> word >> key;
        mp[key]=word;
    }
    map<string, string>::iterator it;
    while (cin >> temp)
    {
        it=mp.find(temp);
        if (it != mp.end())
        {
            cout<<it->second<<endl;
        }
        else
        {
            cout<<"eh"<<endl;
        }
    }
    return 0;
}