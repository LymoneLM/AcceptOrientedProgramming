#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
constexpr int MAXN = 1e6;
constexpr int MOD = 1e9 + 7;
bool isprime[MAXN];
int prime[MAXN];
int Dcount[MAXN];
int index1 = 0;
int digitsum(int n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main() {
    memset(isprime, 1, sizeof(isprime));
    isprime[0] = 0;
    isprime[1] = 0;
    for (int i = 2; i < MAXN; i++) {
        if (isprime[i]) {
            prime[index1++] = i;
        }
        for (int j = 0; j < index1 && i * prime[j] < MAXN; j++) {
            isprime[i * prime[j]] = 0;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
    //for (int i = 0; i < MAXN; i++) cout << prime[i] << endl;
    cin.tie(0);
    cout.tie(0);
    int n;
    scanf("%d", &n);
    for (int i = 1; i < MAXN; i++) {
        Dcount[i] = Dcount[i - 1] + (isprime[digitsum(i)] && isprime[i]);
        //cout << Dcount[i]<< ' ';
    }
    while (n--) {
        int left, right;
        scanf("%d %d", &left, &right);
        if (left != 0)
            printf("%d\n", Dcount[right] - Dcount[left - 1]);
        else
            printf("%d\n", Dcount[right]);
    }
    return 0;
}
