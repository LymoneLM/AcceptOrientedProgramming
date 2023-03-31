#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<pair<int, int>, string> mp;
    int T,N;
    string name;
    ll temp;
    cin >> T;
    unordered_set<ll> us;
    while (T--) {
        cin >> name >> N;
        us.clear();
        while (N--) {
            cin >> temp;
            us.insert(temp);
        }
        mp[make_pair(int(us.size()), N)] = name;
    }
    map<pair<int, int>, string>::iterator it = mp.end();
    mp[make_pair(-1, -1)] = "-";
    mp[make_pair(-1, -2)] = "-";
    mp[make_pair(-1, -3)] = "-";
    for (int i = 0; i < mp.size(); i++) {
        --it;
        cout << it->second << (i == 2 ? '\n' : ' ');
    }
    return 0;
}