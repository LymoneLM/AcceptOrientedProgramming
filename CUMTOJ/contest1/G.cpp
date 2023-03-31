#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char data[300];
    while (true) {
        cin >> data;
        if (strcmp(data,"START")==0){
            continue;
        }
        if (strcmp(data,"END")==0) {
            cout << endl;
            continue;
        }
        if (strcmp(data,"ENDOFINPUT")==0)
            break;
        int len = strlen(data);
        for (int i = 0; i < len; i++) {
            if (data[i] >= 'A' && data[i] <= 'E')
                data[i] += 21;
            else if (data[i] >= 'F' && data[i] <= 'Z')
                data[i] -= 5;
            if (data[i] == '\n')
                data[i] = ' ';
        }
        cout << data <<" ";
    }

    return 0;
}