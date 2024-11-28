/*
    Author: Anas
    Date:   22-11-2024
    Time:   21:11:46
    File:   A_Insomnia_cure.cpp
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
        ll l, m, k, n, d;
        cin >> l >> m >> k >> n >> d;
        ll cnt = 0;
        for (ll i = 1; i <= d; i++)
        {
            if (i % l == 0 or i % m == 0 or i % k == 0 or i % n == 0)
                cnt++;
        }
        cout << cnt <<"\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
