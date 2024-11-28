/*
    Author: Anas
    Date:   30-10-2024
    Time:   18:09:14
    File:   A_Johnny_and_Ancient_Computer.cpp
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
        ll a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "0\n";
            return;
        }
        
        ll big = max(a, b);
        ll small = min(a, b);
        
        if (big % small != 0) {
            cout << "-1\n";
            return;
        }

        ll ratio = big / small;
        ll cnt = 0;
        
        while (ratio % 8 == 0) {
            ratio /= 8;
            cnt++;
        }
        while (ratio % 4 == 0) {
            ratio /= 4;
            cnt++;
        }
        while (ratio % 2 == 0) {
            ratio /= 2;
            cnt++;
        }

        if (ratio != 1) {
            cout << "-1\n";
        } else {
            cout << cnt << "\n";
        }
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
