/*
    Author: Anas
    Date:   15-12-2024
    Time:   13:18:30
    File:   Fibonacci.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        if( n == 1){
            cout << 0;
            return;
        }

        if( n == 2){
            cout << 1;
            return;
        }

        ll a = 0, b = 1, sum = 0;
        for (int i = 0; i < n-2;  i++) {
            sum = a + b;
            a = b;
            b = sum;
        }

        cout << sum;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
