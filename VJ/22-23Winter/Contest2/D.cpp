#include <iostream>
#include <stack>
using namespace std;
stack<char> stc;
stack<char> stb;
int main(){
    char data[110];
    char temp;int i=1;int p=0;
    cout<<"Expression 1: ";
    //输入并转化为后序表达式
    while(temp=getchar()!=EOF){
        switch(temp){
            case '\n':
                //caculate
                cout<<"Expression "<<++i<<": ";
                break;
            case ' ':
                break;
            case '(':
                stc.push('(');
                break;
            case 'V':
            case 'F':
                data[p++]=temp;
                break;
            case '!':
                
        }
    }
}