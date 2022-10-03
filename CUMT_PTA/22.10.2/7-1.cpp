#include <bits/stdc++.h>
using namespace std;
int main()
{
    char num[52];
    scanf("%s",&num);

    double total=1;int len=0;int n2=0;
    while(num[len]!='\0')
    {
    	if(num[len]=='2')
    		n2++;
        ++len;
    }
	if((num[len-1]-'0')%2==0)
	{
		total*=2;
	}
    if(num[0]=='-')
    {
        len--;
        total*=1.5;
    }
    
	total*=n2,total/=len;
	
	printf("%.2lf%%",total*100);
    return 0;
}
