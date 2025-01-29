/*
    Author: Anas
    Date:   29-01-2025
    Time:   20:08:46
    File:   XOR_World.cpp
*/

/*
    1^2^3^4^5^6^7^8....
    1^1^1^1...
    0^0^0...
    4 ta block e niche,,, 
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll zero_to_x(ll x){
    ll ans = 0;
    while(x > 0 and x%4 != 3){
        ans^=x, x--;
    }
    return ans;
}

ll Xor_l_to_r(ll l, ll r){
    return zero_to_x(r)^(l > 0 ? zero_to_x(l-1):0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        ll l,r; cin >> l >> r;
        ll ans = Xor_l_to_r(l,r);
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
