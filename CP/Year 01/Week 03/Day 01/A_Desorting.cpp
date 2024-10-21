/*
    Author: Anas
    Date:   21-10-2024
    Time:   22:37:48
    File:   A_Desorting.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        bool ok = true;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;
        ll mn = LLONG_MAX;
        ll a = 0, b = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            mn = min(mn, v[i + 1] - v[i]);
        }
        if (mn < 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << (mn / 2) + 1 << "\n";
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
