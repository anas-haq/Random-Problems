/*
    Author: Anas
    Date:   15-11-2024
    Time:   22:31:40
    File:   C_Quests.cpp
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
        ll n, k;
        cin >> n >> k;

        vector<ll> a1(n), a2, b1(n), b2;
        for (auto &x : a1)
            cin >> x;
        for (auto &x : b1)
            cin >> x;

        ll ans = 0, sum = 0, mx = 0;

        for (ll i = 0; i < min(n, k); i++)
        {
            sum += a1[i];
            mx = max(mx, b1[i]);
            ll rem = k - (i + 1);
            ans = max(ans, sum + (rem * mx));
        }

        cout << ans << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
