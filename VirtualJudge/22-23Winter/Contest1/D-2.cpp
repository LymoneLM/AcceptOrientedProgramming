// std
#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int arr[10], i, first, iFab, exp; // iFab存储系数的绝对值，exp存储指数
    while (cin >> arr[0])
    {
        first = 1; // 标记第一项输出
        // 输入9个数
        for (i = 1; i < 9; i++)
            cin >> arr[i];
        // 输出一元多项式: 不能出现全部系数都是0，如果是，就为0，常数项了。
        for (i = 0; i < 9; i++)
        {
            if (arr[i] == 0) // 为0，直接跳过
                continue;
            // 输出系数前面的“+”和“-”符号
            if (first)
            { // 系数不为0的第一项输出
                if (arr[i] < 0)
                    cout << "-";
                first = 0;
            }
            else
            {
                if (arr[i] < 0)
                    cout << " - ";
                else
                    cout << " + ";
            }
            // 输出系数
            //             iFab = Fabs(arr[i]); // 求绝对值
            if (arr[i] < 0)
                iFab = -arr[i];
            else
                iFab = arr[i];
            exp = 8 - i; // 指数
            if (iFab != 1 && exp >= 1) // 系数如果是-1或者1，要把1省略不写，最后常数项例外
                cout << iFab;
            if (exp == 0) // 如果是常数项，直接输出绝对值
                cout << iFab;
            // 然后，输出x^和指数
            if (exp > 1)
                cout << "x^" << exp;
            else if (exp == 1)
                cout << "x";
        } // for循环
        if (first) // 如果全部都是0
            cout << "0";
        cout << endl;
    } // while循环
    return 0;
}