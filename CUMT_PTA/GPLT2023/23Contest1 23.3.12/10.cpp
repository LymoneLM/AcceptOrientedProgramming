#include <bits/stdc++.h>
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, temp;
    cin >> N;N--;
    set<int> s;
    cin>> temp;
    s.insert(temp);
    while (N--) {
        cin >> temp;
        if(temp < *s.rbegin()){
            s.erase(s.upper_bound(temp));
        }
        s.insert(temp);
    }
    cout << s.size();
    return 0;
}