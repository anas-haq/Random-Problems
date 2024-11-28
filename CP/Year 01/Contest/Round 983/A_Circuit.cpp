/*
    Author: Anas
    Date:   01-11-2024
    Time:   20:43:18
    File:   A_Circuit.cpp
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
        vector<ll> v(2 * n);
        for (auto &x : v)
            cin >> x;
        ll cnt = 0, cnt1 = 0;
        for (ll i = 0; i < 2 * n; i++)
        {
            if (v[i] == 1)
            {
                cnt1++;
            }
            else
            {
                cnt++;
            }
        }

        if (cnt1 & 1)
        {
            cout << 1 << " " <<min(cnt, cnt1) << "\n";
            return;
        }
        else
        {
            cout << 0 << " " << min(cnt, cnt1) << "\n";
        }


    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
