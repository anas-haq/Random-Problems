/*
    Author: Anas
    Date:   28-12-2024
    Time:   23:49:27
    File:   Last_Factorial_Digit.cpp
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
        int n; cin >> n;
        ll ans = 1;
        for(int i = 1; i <= n; i++){
            ans *= i;
        }
        ll x = ans % 10;
        cout << x <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
