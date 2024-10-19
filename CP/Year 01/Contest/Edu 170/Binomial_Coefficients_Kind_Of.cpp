/*
    Author: Anas
    Date:   14-10-2024
    Time:   23:21:45
    File:   Binomial_Coefficients_Kind_Of.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    auto Anas = [&]()
    {
        vector<ll> v(MAXN);
        v[0] = 1;
        for (int i = 1; i < MAXN; i++)
        {
            v[i] = v[i - 1] * 2;
            v[i] %= MOD;
        }

        int t;
        cin >> t;
        vector<int> n(t);

        for (int i = 0; i < t; i++)
        {
            cin >> n[i];
        }
        for (int i = 0; i < t; i++)
        {
            ll x;
            cin >> x;
            if (x == n[i])
            {
                cout << 1 << endl;
            }
            else
            {
                cout << v[x] << endl;
            }
        }

        // ll C[10][10];
        // for (int i = 0; i < 10; i++)
        // {
        //     for (int j = 0; j < 10; j++)
        //     {
        //         C[i][j] = 0;
        //     }
        // }

        // for (int n = 0; n < 10; n++)
        // { // loop over n from 0 to N-1 (inclusive)
        //     C[n][0] = 1;
        //     C[n][n] = 1;
        //     for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
        //         C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
        // }
        // for (int i = 0; i < 10; i++)
        // {
        //     for (int j = 0; j < 10; j++)
        //     {
        //         cout << C[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
