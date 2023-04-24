//POJ - 2080
#include <iostream>
#include <cstdio>
using namespace std;
int is_r(int n){
        return (0 == n % 4 && n % 100 != 0) || (0 == n % 400)?1:0;
}
int main(){
    char weekday[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int m_d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int temp;
    cin>>temp;
    while(temp!=-1){
        int data[3]={2000,1,1},allday=0;
        int cache=365+is_r(data[0]);
        while(allday+cache<temp){
            allday+=cache,++data[0];
            cache=365+is_r(data[0]+1);
        }
        cache=m_d[data[1]];
        while(allday+cache<temp){
            allday+=cache,++data[1];
            cache=m_d[data[1]+1]+((data[1]+1==2)?is_r(data[0]):0);
        }
        data[2]=temp-allday;
        printf("%d-%02d-%02d %s\n",data[0],data[1],data[2],weekday[temp%7]);
        cin>>temp;
    }
    return 0;
}