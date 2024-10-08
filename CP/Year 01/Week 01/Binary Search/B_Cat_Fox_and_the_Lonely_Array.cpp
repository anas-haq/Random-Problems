/*
    Author: Anas
    Date:   07-10-2024
    Time:   11:58:35
    File:   B_Cat_Fox_and_the_Lonely_Array.cpp
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

        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;

        ll l = 1, r = n, ans = n; 

        auto check = [&](ll ok)
        {
            vector<ll> a(32, 0), b(32, 0); 

            for (ll i = 0; i < ok; i++)
            {
                ll k = v[i];
                ll j = 0;
                while (k)
                {
                    if (k & 1)
                    {
                        a[j]++;
                    }
                    k >>= 1;
                    j++;
                }
            }

            b = a; 

            for (ll i = ok; i < n; i++)
            {
                ll k = v[i];
                ll j = 0;
                while (k)
                {
                    if (k & 1)
                    {
                        b[j]++;
                    }
                    k >>= 1;
                    j++;
                }

                ll m = v[i - ok];
                j = 0;
                while (m)
                {
                    if (m & 1)
                    {
                        b[j]--;
                    }
                    m >>= 1;
                    j++;
                }

                for (ll q = 0; q < 32; q++)
                { 
                    if ((a[q] > 0 && b[q] == 0) || (a[q] == 0 && b[q] > 0))
                    {
                        return false;
                    }
                }
            }

            return true;
        };

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
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
