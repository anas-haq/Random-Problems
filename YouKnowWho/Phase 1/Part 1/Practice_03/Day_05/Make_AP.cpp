/*
    Author: Anas
    Date:   30-12-2024
    Time:   00:12:25
    File:   Make_AP.cpp
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
        ll a,b,c; cin >> a >> b >> c;
        ll x = (2*b)-c;
        ll y = a+c;
        ll z = (2*b)-a;
        if(x > 0 and x%a == 0){
            cout <<"YES\n";
            return;
        }
        if(y%(2*b) == 0){
            cout <<"YES\n";
            return;
        }
        if(z > 0 and z%c == 0){
            cout <<"YES\n";
            return;
        }
        cout <<"NO\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
