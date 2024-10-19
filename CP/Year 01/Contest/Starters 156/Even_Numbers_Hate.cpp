/*
    Author: Anas
    Date:   16-10-2024
    Time:   20:46:51
    File:   E_Numbers_Hate.cpp
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
        vector<ll> v(n), v1, Sum(n);
        vector<ll> O, E;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2)
                O.push_back(v[i]);
            else
                E.push_back(v[i]);
        }

        if (O.size() > 0)
            v1.push_back(O[0]);
        for (ll i = 0; i < E.size(); i++)
            v1.push_back(E[i]);
        if (O.size() > 1)
        {
            for (ll i = 1; i < O.size(); i++)
                v1.push_back(O[i]);
        }
        Sum[0] = v1[0];
        for (ll i = 1; i < n; i++)
            Sum[i] = Sum[i - 1] + v1[i];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (Sum[i] % 2)
                ans++;
        }
        cout << ans << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
