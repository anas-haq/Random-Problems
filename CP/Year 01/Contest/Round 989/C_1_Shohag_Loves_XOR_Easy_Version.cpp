/*
    Author: Anas
    Date:   24-11-2024
    Time:   18:56:51
    File:   C_1_Shohag_Loves_XOR_Easy_Version.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll n=1e6;
const ll N=1e12;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    cin >> test;

    auto Anas = [&]()
    {
        ll x, m;
        cin >> x >> m;

        ll cnt = 0;
        for (ll i = 1; i <= (2*x); i++)
        {
            if (i > m)
            {
                break;
            }
            if (x == i)
            {
                continue;
            }
            ll ans = x ^ i;
            if (x % ans == 0 || i % ans == 0)
            {
                cnt++;
            }
        }

        cout << cnt << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
