/*
    Author: Anas
    Date:   27-01-2025
    Time:   19:15:58
    File:   Multiple_Gift.cpp
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
        ll a,b; cin >> a >> b;
        ll ans = 0;
        while(a <= b){
            ans++;
            a <<= 1;
            // cout << a <<" ";
        }
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
