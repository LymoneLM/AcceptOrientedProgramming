#include <bits/stdc++.h>
#define endl "\n"
#define mm(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;

int main() {
    int chain[100100][3];
    int head, N;
    cin >> head >> N;
    int temp;
    for (int i = 0; i < N; i++) {
        cin >> temp >> chain[temp][0] >> chain[temp][2];
    }
    int p = head;
    int ans[100100];
    int i = 0;
    for (; p!=-1; i++) {
        ans[i] = p;
        p = chain[p][2];
    }
    int l = 0, r = i - 1;
    while (l <= r) {
        if (l == r) {
            printf("%05d %d -1\n", ans[l], chain[ans[l]][0]);
            break;
        }
        printf(l==r?"%05d %d %d\n":"%05d %d %05d\n", ans[r], chain[ans[r]][0], (l==r?-1:ans[l]));
        r--;
        printf(l==r?"%05d %d %d\n":"%05d %d %05d\n", ans[l], chain[ans[l]][0], (l==r?-1:ans[r]));
        l++;
    }

    return 0;
}