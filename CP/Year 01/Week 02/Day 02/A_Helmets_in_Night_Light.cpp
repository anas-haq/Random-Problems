/*
    Author: Anas
    Date:   12-10-2024
    Time:   21:47:39
    File:   A_Helmets_in_Night_Light.cpp
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        vector<pair<ll, ll>> v;
        v.push_back({n+1,k});
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (ll i = 0; i < n; i++)
        {
            v.push_back({a[i], b[i]});
        }
        auto cmp = [&](pair<ll, ll> a, pair<ll, ll> b)
        {
            return a.second < b.second;
        };
        sort(v.begin(), v.end(), cmp);
        int total = 1;
        ll cost = k;
        int idx = 0;
        while (total < n)
        {
            int left = n - total;

            if (v[idx].first <= left)
            {
                total += v[idx].first;
                cost = cost + v[idx].second * 1LL * v[idx].first;
            }
            else
            {
                total = n;
                cost = cost + left * 1LL * v[idx].second;
            }

            idx++;
        }

        cout<<cost<<'\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
