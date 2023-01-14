#include <bits/stdc++.h>
using namespace std;
// 这是一个对拍程序
// data.exe是我们写的一个数据生成器(根据需求写)
// 1.exe就是自己的程序
// 2.exe就是别人的程序
int main()
{
    int n = 0; 
    while (true)
    {
        printf("%d:",n++);
        system("data.exe>data.in"); // 将数据生成器的数据导入到data.in
        system("1.exe<data.in>1.out");
        system("2.exe<data.in>2.out");
        if (system("fc 1.out 2.out")) // 说明结果是不同的
            system("pause");          // 暂停
    }
    return 0;
}
