/*
    Author: Anas
    Date:   24-12-2024
    Time:   18:18:21
    File:   Maximum_GCD.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        ll n; cin >> n;
        // ll ans = __gcd(50,25);
        if(n > 3){
            if(n&1){
                n--;
            }
            ll a = (n>>1);
            ll ans = __gcd(a,n);
            cout << ans <<"\n";
            return;
        }
        cout << 1 <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
