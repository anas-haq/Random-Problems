/*
    Author: Anas
    Date:   21-10-2024
    Time:   23:28:54
    File:   A_United_We_Stand.cpp
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
        vector<ll> a(n), b, c;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = a[0], k = -1;
        b.push_back(ans);
        for (ll i = 1; i < n; i++)
        {
            if (ans == a[i])
            {
                b.push_back(ans);
            }
            else
            {
                k = i;
                break;
            }
        }
        if (k != -1)
        {
            for (ll i = k; i < n; i++)
            {
                c.push_back(a[i]);
            }
        }
        ll an = c.size();
        if (an == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << (ll)(b.size()) << " " << (ll)(c.size()) << "\n";
            for (auto i : b)
                cout << i << " ";
            cout << "\n";
            for (auto i : c)
                cout << i << " ";
            cout << "\n";
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
