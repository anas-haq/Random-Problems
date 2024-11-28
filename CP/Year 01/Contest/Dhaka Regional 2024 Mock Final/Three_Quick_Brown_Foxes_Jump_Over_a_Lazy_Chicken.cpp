/*
    Author: Anas
    Date:   09-11-2024
    Time:   14:37:46
    File:   p2.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    cin >> test;

    auto Anas = [&]()
    {
        double a, b, c;
        cin >> a >> b >> c;
        ll s = (a + b + c);
        ll x = (s - (2 * a)) * (s - (2 * b)) * (s - (2 * c));
        ll y = (4 * s);
        ll g = gcd(x, y);
        if (g == 1)
            cout << x << "/" << y << endl;
        else
            cout << (x / g) << "/" << (y / g) << endl;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
