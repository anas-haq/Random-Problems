/*
    Author: Anas
    Date:   27-10-2024
    Time:   21:15:35
    File:   C_Alya_and_Permutation.cpp
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
        vector<ll> v, v1;
        ll x = 1;
        for (ll i = 0; i < n; i++)
        {
            ll b = (1 << i);
            if (b > n)
                break;
            x = b;
        }
        v.push_back(2);
        v.push_back(1);
        v.push_back(3);
        for (ll i = 4; i <= n; i++)
        {
            if (i & 1)
            {
                v.push_back(i);
            }
            else
            {
                v.push_back(i);
            }
        }
        v1 = v;
        for (ll i = 0; i < n; i++)
        {
            if (v1[i] == x - 1)
            {
                swap(v1[i], v1[n - 1]);
                break;
            }
        }
        ll k = 0, k1 = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                k = k & v[i - 1];
            }
            else
            {
                k = k | v[i - 1];
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                k1 = k1 & v1[i - 1];
            }
            else
            {
                k1 = k1 | v1[i - 1];
            }
        }
        cout << max(k, k1) << endl;
        if (k > k1)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
        }

        cout << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
