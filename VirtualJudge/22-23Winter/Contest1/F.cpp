// POJ - 1488
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>

//using ll = long long;

int main() {
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    bool flag = false;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '"') {
            std::cout << (flag ? "''" : "``");
            flag = !flag;
        } else
            putchar(c);
    }
    return 0;
}