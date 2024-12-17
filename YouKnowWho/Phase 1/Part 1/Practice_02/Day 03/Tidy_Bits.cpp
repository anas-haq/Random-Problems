/*
    Author: Anas
    Date:   17-12-2024
    Time:   17:29:42
    File:   Tidy_Bits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        unsigned int n; cin >> n;
        int bit_number = __builtin_popcount(n);
        unsigned int ans = (1u<<bit_number) - 1;
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
