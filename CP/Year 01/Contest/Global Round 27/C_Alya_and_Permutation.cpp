/*
    Author: Anas
    Date:   27-10-2024
    Time:   21:15:35
    File:   C_Alya_and_Permutation.cpp
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
        if (n & 1)
        {
            cout << n << '\n';
            cout << "2 1 ";
            for (ll i = 3; i <= n; i++)
                cout << i << " ";
            cout << '\n';
            return;
        }
        ll res, ans = 3, i = 1;
        while (true)
        {
            res = (1LL << i);
            res--;
            if (res > n)
                break;
            ans = res;
            i++;
        }
        cout << (1LL << i) - 1 << '\n';
        if ((ans + 1) == n)
        {
            cout << "2 1 ";
            for (ll i = 3; i <= n; i++)
                cout << i << " ";
            cout << '\n';
        }
        else
        {
            for (ll i = 1; i <= n - 2; i++)
            {
                if (i == ans)
                    continue;
                cout << i << " ";
            }
            cout << n - 1 << " " << n << " " << ans << '\n';
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
