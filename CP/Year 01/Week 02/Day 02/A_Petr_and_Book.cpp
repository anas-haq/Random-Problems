/*
    Author: Anas
    Date:   12-10-2024
    Time:   22:26:20
    File:   A_Petr_and_Book.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        vector<ll> v(7);
        for (ll i = 0; i < 7; i++)
        {
            cin >> v[i];
        }
        ll i = 0, cnt = 0;
        while (n > 0)
        {
            ll sum = 0;
            for (ll i = 0; i < 7; i++)
            {
                sum += v[i];
                if (sum >= n)
                {
                    cout << i + 1;
                    return;
                }
            }
            n -= sum;
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
