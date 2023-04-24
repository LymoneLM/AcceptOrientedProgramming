//POJ 2106 RE
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
stack<char> stc;
stack<char> stb;
void _or()
{
    char A, B;
    stc.pop();
    A = stb.top();
    stb.pop();
    B = stb.top();
    stb.pop();
    if (A == 'V' || B == 'V')
        stb.push('V');
    stb.push('F');
}
void _and()
{
    char A, B;
    stc.pop();
    A = stb.top();
    stb.pop();
    B = stb.top();
    stb.pop();
    if (A == 'V' && B == 'V')
        stb.push('V');
    stb.push('F');
}
void _not()
{
    char A;
    stc.pop();
    A = stb.top();
    stb.pop();
    if (A == 'V')
        stb.push('F');
    stb.push('V');
}
inline void func()
{
    char C = stc.top();
    switch (C)
    {
    case '!':
        _not();
        break;
    case '&':
        _and();
        break;
    case '|':
        _or();
        break;
    }
}
int main()
{
    char C;
    char temp;
    int i = 1;
    while (cin >> temp)
    {
        switch (temp)
        {
        case 'F':
        case 'V':
            stb.push(temp);
            break;
        case ')':
            while (stc.top() != '(')
                func();
            stc.pop();
            while (stc.top()=='!')
                func();
            break;
        case '!':
            stc.push(temp);
            break;
        case '&':
            while (stc.top() == '&' || stc.top() == '!')
            {
                C = stc.top();
                switch (C)
                {
                case '!':
                    _not();
                    break;
                case '&':
                    _and();
                    break;
                }
            }
            stc.push(temp);
            break;
        case '|':
            while (stc.top() == '|' || stc.top() == '&' || stc.top() == '!')
                func();
            stc.push(temp);
            break;
        case '(':
            stc.push(temp);
            break;
        case '\n':
            while (!stc.empty())
                func();
            printf("Expression %d: %c\n", i++, stb.top());
            stb.pop();
            break;
        }
    }
    while (stc.size() != 0)
        func();
    printf("Expression %d: %c\n", i++, stb.top());
    return 0;
}