#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    srand(time(0));
    for(int i=0;i<9;i++)
        cout<<(rand()%10)*(rand()%2?1:-1)<<" ";
    return 0;
}