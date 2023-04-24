#include <bits/stdc++.h>
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
using ll = long long;
class Student{
public:
    int sex;
    string name;
    bool flag;
    bool input(int s,string n){
        sex=s;name=n;
        flag=true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin>>N;
    Student data[52];
    int sex;string name;
    for(int i=0;i<N;i++){
        cin>>sex>>name;
        data[i].input(sex,name);
    }
    int T=N/2;
    while(T--){
        int i=0,j=N-1;
        while(!data[i].flag) i++;
        while(!(data[j].flag&&(data[j].sex!=data[i].sex))) j--;
        data[i].flag=false;
        data[j].flag=false;
        cout<<data[i].name<<" "<<data[j].name<<endl;
    }
    return 0;
}