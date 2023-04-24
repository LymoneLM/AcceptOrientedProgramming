#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int h2m(char* date,int d){
    int h=(date[0]-'0')*10+(date[1]-'0');
    int m=(date[3]-'0')*10+(date[4]-'0');
    return (d*24+h)*60+m;
}
map<int,int> mp;
map<int,int>::iterator it;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin>>T;
    int i=0;
    int bno;
    char op,date[10];
    ll max=0,time=0;
    while(i!=T){
        cin>>bno>>op>>date;
        if(bno==0){
            cout<<max<<" "<<(max==0?0:int(time*1.0/max+0.5))<<endl;
            i++;
            max=0,time=0;
            continue;
        }
        if(op=='S'){
            mp.erase(bno);
            mp.insert(make_pair(bno,h2m(date,i)));
        }else{
            it=mp.find(bno);
            if(it!=mp.end()){
                max++;
                time+=(h2m(date,i)-(it->second));
                mp.erase(it);
            }
        }
    }

    return 0;
}