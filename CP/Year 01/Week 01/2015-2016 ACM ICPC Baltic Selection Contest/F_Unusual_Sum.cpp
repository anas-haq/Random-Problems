/*
    Author: Anas
    Date:   08-10-2024
    Time:   11:44:57
    File:   F_Unusual_Sum.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    cin >> t;

    auto Anas = [&]() {
        double l, r;
        cin >> l >> r;


        double c = (1.0 / l) -(1.0/(r+1));

        cout <<fixed<< setprecision(12) << c << "\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
