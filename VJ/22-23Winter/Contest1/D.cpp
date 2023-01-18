//[POJ-1555],WA but why?
#include <cstdlib>
#include <iostream>
using namespace std;
bool output(int num, int order, int p) {
    if (num != 0) {
        if (p == 0) {
            if (abs(num) != 1 || order == 0)
                cout << num;
            cout << (order > 0 ? "x" : "");
            if (order > 1)
                cout << '^' << order;
            return true;
        } else {
            if (num > 0)
                cout << " + ";
            else
                cout << " - ";
            if (abs(num) != 1 || order == 0)
                cout << abs(num);
            cout << (order > 0 ? "x" : "");
            if (order > 1)
                cout << '^' << order;
            return true;
        }
    }
    return false;
}
int main() {
    int data[10];
    while (cin >> data[8]) {
        int p = 0;
        for (int i = 7; i >= 0; i--)
            cin >> data[i];
        for (int i = 8; i >= 0; i--) {
            if (output(data[i], i, p))
                p++;
        }
        if (p == 0)
            cout << 0;
        cout << endl;
    }
    return 0;
}