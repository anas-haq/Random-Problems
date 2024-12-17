/*
    Author: Anas
    Date:   17-12-2024
    Time:   12:30:02
    File:   Flipping_bits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    cin >> test;

    auto Anas = [&]() {
        unsigned long long int n; cin >> n;
        ll ans = 0;
        for (int i = 0; i <= 31; i++){
            if((n>>i)&1){
                // continue;
            }
            else{
                ans+= (1u<<i);
            }
        }
        cout<< ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
