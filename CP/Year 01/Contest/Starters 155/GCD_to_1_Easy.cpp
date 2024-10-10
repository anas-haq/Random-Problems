/*
    Author: Anas
    Date:   09-10-2024
    Time:   20:59:51
    File:   GCD_to_1_Easy.cpp
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
        ll n, m;
        cin >> n >> m;
        ll v[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                v[i][j] = 2;
            }
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            bool ok = false;
            for (ll j = 0; j < m; j++)
            {

                if (!ok)
                {
                    if (cnt >= m)
                        break;
                    v[i][cnt] = 3;
                    cnt++;
                    ok = true;
                }
            }
        }

        for (ll i = n; i < m; i++)
        {
            v[n - 1][i] = 3;
        }
        for (ll i = m; i < n; i++)
        {
            v[i][m - 1] = 3;
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {

                cout << v[i][j] << " ";
            }
            cout << "\n";
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
