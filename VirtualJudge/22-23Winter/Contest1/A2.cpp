#include <iostream>
#include <cstdio>
using namespace std;
const char wstr[][20] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
const int m_d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int days_of_year(int year){
    if (year % 100 == 0)
        return year % 400 == 0 ? 366 : 365;
    return year % 4 == 0 ? 366 : 365;
}
int days_of_month(int month,int year){
    if(month == 2)
        return days_of_year(year)==366?29:28;
    else 
        return m_d[month];
}
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        int year=2000,month=1,day=1,week=n%7;
        while(n){
            if(n>=days_of_year(year)){
                n-=days_of_year(year);
                ++year;
            }
            else if(n>=days_of_month(month,year)){
                n-=days_of_month(month,year);
                ++month;
            }
            else{
            day+=n;
            n=0;
            }     
        }
        printf("%d-%02d-%02d %s\n",year,month,day,wstr[week]);
        cin>>n;
    }
    return 0;
}
