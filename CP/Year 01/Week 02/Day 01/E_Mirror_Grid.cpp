/*
    Author: Anas
    Date:   10-10-2024
    Time:   23:46:17
    File:   E_Mirror_Grid.cpp
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
        vector<vector<ll>> v(n, vector<ll>(n));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                v[i][j] = c - '0';
            }
        }

        ll ans = 0;
        for (ll i = 0; i < (n + 1) / 2; i++)
        {
            for (ll j = 0; j < n / 2; j++)
            {
                ll s = v[i][j] + v[j][n - 1 - i] + v[n - 1 - i][n - 1 - j] + v[n - 1 - j][i];
                ans += min(s, 4 - s);
            }
        }
        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
