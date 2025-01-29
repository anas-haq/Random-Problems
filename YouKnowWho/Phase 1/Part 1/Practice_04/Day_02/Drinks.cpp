/*
    Author: Anas
    Date:   28-01-2025
    Time:   20:13:04
    File:   Drinks.cpp
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
        int n; cin >> n;
        ll sum = 0;
        for(int i = 0 ; i < n; i++){
            int x; cin >> x;
            sum += x;
        }
        double ans = (sum*1.0)/(n*1.0);
        cout << fixed << setprecision(12) << ans ;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
