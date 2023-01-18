#include <bits/stdc++.h>

using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll T, n;
    ll l1, r1, l2, r2;

    std::cin >> T;
    while (T--) {
        std::cin >> n;
        std::cin >> l1 >> r1 >> l2 >> r2;

        l1=n-l1,r1=n-r1;
        std::swap(l1,r1);
        ll l=std::max(l1,l2);
        ll r=std::min(r1,r2);
        if(l<=r)
            std::cout<<r-l+1<<std::endl;
        else    
            std::cout<<0<<std::endl;

    }

    return 0;
}