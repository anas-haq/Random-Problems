/*
    Author: Anas
    Date:   10-12-2024
    Time:   22:29:16
    File:   Multiplication_1.cpp
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
        ll a,b;
        cin>>a>>b;
        ll x=(a*b);
        cout<<x;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}