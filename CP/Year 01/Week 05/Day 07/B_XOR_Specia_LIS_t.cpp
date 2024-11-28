/*
    Author: Anas
    Date:   20-11-2024
    Time:   21:42:31
    File:   B_XOR_Specia_LIS_t.cpp
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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;
        if (!(n & 1))
        {
            cout << "YES\n";
            return;
        }
        if (n & 1)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                if (v[i] >= v[i + 1])
                {
                    cout << "YES\n";
                    return;
                }
            }
            cout << "NO\n";
            return;
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
