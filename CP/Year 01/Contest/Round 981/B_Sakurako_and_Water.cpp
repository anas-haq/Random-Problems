/*
    Author: Anas
    Date:   24-10-2024
    Time:   21:16:13
    File:   B_Sakurako_and_Water.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc = 1;
    cin >> tc;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            int k = 0;
            int mn = INT_MAX;
            for (int j = i; j < n; j++)
            {
                if (k >= n)
                    break;
                mn = min(mn, a[k][j]);
                k++;
            }
            if (mn < 0)
                ans += mn;
        }
        for (int i = 1; i < n; i++)
        {
            int k = 0;
            int mn = INT_MAX;
            for (int j = i; j < n; j++)
            {
                if (k >= n)
                    break;
                mn = min(mn, a[j][k]);
                k++;
            }
            if (mn < 0)
                ans += mn;
        }
        cout << ((-1) * ans) << endl;
    };

    while (tc--)
    {
        Anas();
    }

    return 0;
}
