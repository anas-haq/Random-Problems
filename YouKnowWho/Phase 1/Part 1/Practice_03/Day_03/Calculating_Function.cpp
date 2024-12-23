/*
    Author: Anas
    Date:   23-12-2024
    Time:   21:50:32
    File:   Calculating_Function.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        
        ll n; cin >> n;
        ll val_even = (n>>1);
        ll val_odd = (n>>1);
        if(n&1){
            val_odd++;
        }
        ll even = val_even*(val_even+1);
        ll odd = val_odd*(val_odd);
        ll ans = even - odd;
        cout << ans;

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
