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
        vector<ll> v(n);
        vector<ll> sesh(k + 1, -1);
        vector<multiset<ll>> dhaka(k + 1);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (ll i = 0; i < n; i++)
        {
            ll laf = i - sesh[v[i]] - 1; 
            sesh[v[i]] = i; 
            dhaka[v[i]].insert(laf); 

            while (dhaka[v[i]].size() > 2)
            {
                dhaka[v[i]].erase(dhaka[v[i]].begin());
            }
        }

        ll ans = n;
        for (ll i = 0; i <= k; i++)
        {
            if (sesh[i] != -1) 
            {
                ll laf = n - sesh[i] - 1; 
                dhaka[i].insert(laf);

                while (dhaka[i].size() > 2)
                {
                    dhaka[i].erase(dhaka[i].begin());
                }

                ll val1 = *dhaka[i].begin();
                ll val2 = *dhaka[i].rbegin();
                ans = min(ans, max(val1, val2 / 2)); 
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
