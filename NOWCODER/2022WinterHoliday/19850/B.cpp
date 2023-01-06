/*
链接：https://ac.nowcoder.com/acm/contest/19850/B
来源：牛客网

题目描述 
自从ZZZZone吃完糖果后，他开始改吃巧克力了，他每天想吃n个巧克力增在甜蜜值，他决定早上吃K个巧克力，晚上吃n - K个巧克力，每个巧克力在早上吃和在晚上吃的甜蜜值是不一样的，他想让自己得到的甜蜜值最大，并想知道最大是多少。
请你编程帮助他。
输入描述:
第一行包含两个数n，K表示每天要吃的巧克力数量和要在早上吃的数量。（n <= 100000, K <= n)
第二行包含n个整数Ai（1 <= i <= n) 表示个第i个巧克力在早上吃可得到的甜蜜值 (Ai <= 100000)
第三行包含n个整数Bi（1 <= i <= n) 表示个第i个巧克力在晚上吃可得到的甜蜜值 (Bi <= 100000)
输出描述:
输出仅一行包含一个整数表示ZZZZone能获得的最大甜蜜值。
示例1
输入
复制
2 1
3 6
2 8
输出
复制
11*/

#include <bits/stdc++.h>
#define MAXN 100001
using namespace std;
int a[MAXN],b[MAXN],c[MAXN];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,K;long long sum=0;
    cin>>n>>K;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=a[i]-b[i];
        sum+=b[i];
    }
    sort(c,c+n,cmp);
    for(int i=0;i<K;i++)
        sum+=c[i];
    cout<<sum;
    return 0;
}