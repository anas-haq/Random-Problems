/*
    Author: Anas
    Date:   20-11-2024
    Time:   16:45:15
    File:   C_Game_with_Multiset.cpp
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
        vector<ll> bits(31,0);
        while (n--)
        {
            ll x, y;
            cin >> x >> y;            
            if (x == 1)
            {
                bits[y]++;
            }
            else
            {
                for (ll i = 29; i >= 0; i--)
                {
                    ll k = min(bits[i], (y >> i));
                    y -= (k * (1 << i));
                }
                if (y == 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}