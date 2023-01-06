#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void count(){
    int num[6][1000];
    string temp;
    bool flag;
    int i;int len;
    for(int t=0;t<2;t++){
        cin>>temp;
        flag=false;
        i=0;
        len=temp.length()-1;
        for(;len>=0;len--){
            if(temp[len]!='0')
                flag=true;
            if(flag)num[t][i++]=temp[len]-'0';
        }
        flag=false;
        i=0;len=temp.length()-1;
        for(;len>=0;len--){
            if(temp[len]!='0')
                flag=true;
            if(flag)num[t][i++]=temp[len]-'0';
        }
    }
    for(int i=0;i<1000;i++){
        num[2][i]+=num[0][i]+num[1][i];
        if(num[2][i]>=10)
            num[2][i]-=10,++num[2][i+1];
    }
}
int main(){

}