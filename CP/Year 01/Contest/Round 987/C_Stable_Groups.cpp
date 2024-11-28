/*
    Author: Anas
    Date:   18-11-2024
    Time:   20:52:32
    File:   C_Stable_Groups.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    auto Anas = [&]()
    {
        ll n, k, xf;
        cin >> n >> k >> xf;

        vector<ll> v(n), v2;
        for (auto &x : v)
            cin >> x;

        sort(v.begin(), v.end());
        if (n == 1)
        {
            cout << 1 << "\n";
            return;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ll val = v[i + 1] - v[i];
            if (val > xf)
            {
                val -= xf;
                val = ((val / xf) + (val % xf != 0));
                // cout << val << " ";
                v2.push_back(val);
            }
            else
            {
                val=0;
                v2.push_back(val);
            }
            
            
        }

        sort(v2.begin(), v2.end());

        ll ans = n;

        for (auto a : v2)
        {
            if (a <= k)
            {
                k -= a;
                ans--;
            }
            else
            {
                break;
            }
        }

        cout<<ans<<"\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
