/*
    Author: Anas
    Date:   26-12-2024
    Time:   23:17:38
    File:   B_Easy_Number_Challenge.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1<<30;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int a,b,c; cin >> a >> b >>c;
        ll ans = 0;
        for(int i = 1; i<= a; i++){
            for(int j = 1; j <= b; j++){
                for(int k = 1; k <= c; k++){
                    ll x = i*j*k;
                    x = x%mod;
                    ans+=x;
                }
            }
        }
        cout << ans ;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
