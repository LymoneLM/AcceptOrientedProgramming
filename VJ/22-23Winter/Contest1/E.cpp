//POJ - 2260
#include <iostream>
#include <cstring>
using namespace std;
bool issingle(int n)
{
    return n%2;
}
int main()
{
    int n;
    int temp,all;
    int x[110], y[110];
    int sx,sy;
    cin >> n;
    while(n!=0)
    {
        sx=sy=all=0;
        memset(x,0,sizeof(int)*n);
        memset(y,0,sizeof(int)*n);
        for(int xi=0;xi<n;xi++)
            for(int yi=0;yi<n;yi++)
            {
                cin>>temp;
                if(temp)
                    ++x[xi],++y[yi];
                all+=temp*2;
            }
        int xx,yy;
        for(int i=0;i<n;i++)
        {
            if(issingle(x[i]))
            {
                ++sx;
                xx=i;
            }
            if(issingle(y[i]))
            {
                ++sy;
                yy=i;
            }
        }
        if(sx==0 && sy == 0)
            cout<<"OK"<<endl;
        if(sx==1 && sy == 1)
            printf("Change bit (%d,%d)\n",xx+1,yy+1);
        if(sx>1||sy>1)
            cout<<"Corrupt"<<endl;
        cin>>n;
    }
    return 0;
}