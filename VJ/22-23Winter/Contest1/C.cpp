//POJ - 2325
#include <iostream>
#include <cstring>
using namespace std;
bool div(char *source, int divisor)
{
    int p = 0, k = 0;
    int temp = 0;
    char result[1000];
    while (source[p] != '\0')
    {
        temp *= 10, temp += source[p++] - '0';
        if (temp / divisor > 0)
        {
            result[k++] = temp / divisor + '0';
            temp = temp % divisor;
        }
        else
        {
            result[k++] = '0';
        }
    }
    if (temp == 0)
    {
        result[k] = '\0';
        k = (result[0] == '0' ? 1 : 0);
        strcpy(source,result+k);
        return true;
    }
    else
        return false;
}
int main()
{
    char data[1000];
    int result[3000];
    int divisor,p;
    cin >> data;
    while (data[0] != '-')
    {
        if(data[1]=='\0')
        {
            cout<<"1"<<data<<endl;//根据题目样例修改，实际无意义
            cin>>data;
            continue;
        }
        divisor = 9;
        p = 0;
        while(divisor != 1)
        {
            if(div(data,divisor))
                result[p++]=divisor;
            else
                --divisor;
        }
        if(strlen(data)>1)
        {
            cout<<"There is no such number."<<endl;
        }
        else
        {
            while(p--)
                cout<<result[p];
            
            cout<<endl;
        }
        cin >> data;
    }
    return 0;
}