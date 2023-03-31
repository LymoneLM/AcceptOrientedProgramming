#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin>>K;
    K++;
    int i=0;
    char data[10];
    while(++i){
        cin>>data;
        if(strcmp(data,"End")==0) break;
        if(i%K==0) cout<<data<<endl;
        else{
            switch(data[0]){
                case 'C':
                    cout<<"Bu"<<endl;
                    break;
                case 'J':
                    cout<<"ChuiZi"<<endl;
                    break;
                case 'B':
                    cout<<"JianDao"<<endl;
                    break;
            }
        }
    }

    return 0;
}