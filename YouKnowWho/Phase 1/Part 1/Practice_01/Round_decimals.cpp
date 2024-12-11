/*
    Author: Anas
    Date:   10-12-2024
    Time:   22:32:57
    File:   Round_decimals.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        double a;
        cin>>a;

        ll x=round(a);
        cout<<x;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
