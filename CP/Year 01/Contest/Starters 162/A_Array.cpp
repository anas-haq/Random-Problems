/*
    Author: Anas
    Date:   28-11-2024
    Time:   19:44:24
    File:   A_Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    // cin >> test;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;

        vector<ll> small, big, zero, v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                zero.push_back(0);
            }
            else if (v[i] < 0)
            {
                small.push_back(v[i]);
            }
            else
            {
                big.push_back(v[i]);
            }
        }
        bool ok = true;
        ll x;
        if (big.size())
        {
            if (!(small.size() & 1))
            {
                ok = false;
                x = small.back();
                small.pop_back();
            }
            cout << small.size() << " ";
            for (auto i : small)
                cout << i << " ";
            cout << "\n";
            cout << big.size() << " ";
            for (auto i : big)
                cout << i << " ";
            cout << "\n";
        }
        else
        {
            cout << 1 << " ";
            cout << small.back() << "\n";
            small.pop_back();
            if ((small.size() & 1))
            {
                ok = false;
                x = small.back();
                small.pop_back();
            }
            cout << small.size() << " ";
            for (auto i : small)
                cout << i << " ";
            cout << "\n";
        }

        if (ok)
        {
            cout << zero.size() << " ";
            for (auto i : zero)
                cout << i << " ";
            cout << "\n";
            return;
        }

        cout << zero.size() + 1 << " ";
        for (auto i : zero)
            cout << i << " ";
        cout << x;
        cout << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
