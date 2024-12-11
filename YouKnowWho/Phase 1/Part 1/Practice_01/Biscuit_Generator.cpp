/*
    Author: Anas
    Date:   10-12-2024
    Time:   23:01:56
    File:   Biscuit_Generator.cpp
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
        ll a,b,c;
        cin>>a>>b>>c;

        ll x=c/a;
        x*=b;
        cout<<x;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
