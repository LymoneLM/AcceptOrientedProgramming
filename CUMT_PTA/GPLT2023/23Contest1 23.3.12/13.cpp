#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int a[100] = {0};
void insert(int n, int data) {
    if (a[n] == 0) {
        a[n] = data;
        return;
    }
    if (a[n] < data)
        insert(n * 2, data);
    else
        insert(n * 2 + 1, data);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        insert(1, m);
    }
    int i = 0, flag = 0, num = 0;
    while (num < n) {
        if (a[i] != 0) {
            if (flag == 0)
                flag = 1;
            else
                cout << " ";
            cout << a[i];
            num++;
        }
        i++;
    }
    cout << endl;
    if (i == num + 1)
        cout << "YES";
    else
        cout << "NO";
}