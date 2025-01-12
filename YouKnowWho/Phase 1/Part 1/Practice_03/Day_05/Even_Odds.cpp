/*
    Author: Anas
    Date:   29-12-2024
    Time:   22:09:08
    File:   Even_Odds.cpp
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
        ll n,k; cin >> n >> k;
        ll x = n>>1LL;
        if(n&1){
            x++;
        }
        if(k <= x){
            cout << (2*k)-1;
            return;
        }
        cout << 2*(k-x);
        

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
