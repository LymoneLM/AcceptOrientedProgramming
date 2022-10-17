#include <bits/stdc++.h>
using namespace std;
int main()
{

    int Pa, Pb;
    int temp;
    int ja = 0, jb = 0;
    scanf("%d %d", &Pa, &Pb);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        if (temp)
            jb++;
        else
            ja++;
    }

    if (Pa > Pb&&ja>0)
    {
        printf("The winner is ");
        printf("a: %d + %d\n", Pa, ja);
        return 0;
    }
    if(Pb>Pa&&jb>0)
    {
        printf("The winner is ");
        printf("b: %d + %d\n", Pb, jb);
        return 0;
    }
    if (Pa < Pb && ja == 3)
    {
        printf("The winner is ");
        printf("a: %d + %d\n", Pa, ja);
        return 0;
    }
    if (Pa > Pb && jb == 3)
    {
        printf("The winner is ");
        printf("b: %d + %d\n", Pb, jb);
        return 0;
    }
    return 0;
}