/*
    Author: Anas
    Date:   29-12-2024
    Time:   22:36:36
    File:   A_Odd_Divisor.cpp
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
        ll n; cin >> n;
        if(n&1){
            cout <<"YES\n";
            return;
        }
        while(n > 1){
            if(n&1){
                cout<<"YES\n";
                return;
            }
            n >>= 1LL;
        }
        cout <<"NO\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
