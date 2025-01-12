/*
    Author: Anas
    Date:   29-12-2024
    Time:   23:12:32
    File:   Required_Remainder.cpp
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
        ll x,y,n; cin >> x >> y >> n;
        
        ll a = n%x;
        ll ans = n - a;

        if((ans+y) > n){
            cout << ans-(x-y)<<"\n";
            return;
        }
        cout << ans+y <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
