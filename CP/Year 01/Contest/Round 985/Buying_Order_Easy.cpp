/*
    Author: Anas
    Date:   13-11-2024
    Time:   21:47:36
    File:   Buying_Order_Easy.cpp
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
        ll ans = n + n;
        if (v[0] == 0 || v[n-1]==0)
        {
            ans--;
        }
        if (v[n - 1] == 1 || v[0]==1)
        {
            ans--;
        }
        cout << ans << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}