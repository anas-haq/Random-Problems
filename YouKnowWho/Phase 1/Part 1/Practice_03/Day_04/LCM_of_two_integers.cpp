/*
    Author: Anas
    Date:   28-12-2024
    Time:   23:46:32
    File:   LCM_of_two_integers.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int a, b; cin >> a >> b;
        ll x = __gcd(a,b);
        ll lcm = (a/x)*b;
        cout << lcm;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
