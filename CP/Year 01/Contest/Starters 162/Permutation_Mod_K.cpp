/*
    Author: Anas
    Date:   27-11-2024
    Time:   20:55:14
    File:   Permutation_Mod_K.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    cin >> test;

    auto Anas = [&]()
    {
        ll n, k;
        cin >> n >> k;

        // for(ll i=1;i<=n;i++)
        // {
        //     cout<<i%k<<" ";
        // }
        // cout<<"\n";
        if (n == 1)
        {
            cout << "-1\n";
            return;
        }

        ll cnt = 0, j = k;
        vector<ll> v, ans;
        bool ok = true;
        while (j <= n)
        {
            v.push_back(j);
            j+=k;
        }
        j-=k;
        if (j < n)
        {
            ok = false;
        }
        if (j == n)
        {
            ok = true;
        }
        // cout<<j<<" ";
        // ll x = n;
        ll q = v.size(), y = 0;
        for (ll i = 0; i < n; i++)
        {
            // cout<<i%k<<" ";
            if (i % k == 0 && y < q)
            {
                ans.push_back(v[y]);
                y++;
                cnt++;
            }
            else
            {
                if (cnt % k == 0)
                {
                    cnt++;
                }
                ans.push_back(cnt);
                cnt++;
            }
        }

        if (!ok)
        {
            // cout<<1<<" ";
            for (ll i = 0; i < (n % k); i++)
            {
                ans.pop_back();
            }
            ans.push_back(n);
            ll z = v[q - 1];
            z++;
            for (ll i = 0; i < (n % k) - 1; i++)
            {
                ans.push_back(z);
                z++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (i > 0)
            {
                if (((i + 1) % k) == (ans[i] % k))
                {
                    swap(ans[i - 1], ans[i]);
                }
            }
        }
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
