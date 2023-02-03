#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    cin >> N;
    if (N <= 7) {
        cout<<"very easy";
        return 0;
    }
    if (N <= 233) {
        cout<<"easy";
        return 0;
    }
    if (N <= 10032) {
        cout<<"medium";
        return 0;
    }
    if (N <= 114514) {
        cout<<"hard";
        return 0;
    }
    if (N <= 1919810) {
        cout<<"very hard";
        return 0;
    }

    cout<<"can not imagine";

    return 0;
}