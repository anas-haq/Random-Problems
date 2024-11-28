/*
    Author: Anas
    Date:   30-10-2024
    Time:   18:25:45
    File:   B_Fair_Numbers.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto isFairNumber = [&](ll num) {
        ll temp = num;
        while (temp > 0) {
            ll digit = temp % 10;
            if (digit != 0 && num % digit != 0) {
                return false;
            }
            temp /= 10;
        }
        return true;
    };

    auto Anas = [&]() {
        ll n;
        cin >> n;

        while (!isFairNumber(n)) {
            n++;
        }

        cout << n << "\n";
    };

    while (t--) {
        Anas();
    }

    return 0;
}
