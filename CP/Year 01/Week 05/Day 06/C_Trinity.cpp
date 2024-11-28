/*
    Author: Anas
    Date:   17-11-2024
    Time:   18:28:46
    File:   C_Trinity.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        pbds<ll> pb;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            pb.insert(v[i]);
        }

        sort(v.begin(), v.end());

        ll ans = v[0] + v[1] > v[n - 1] ? 0 : n;
        // cout << ans;
        for (ll i = 0; i < n - 1; i++)
        {
            ll need = n-pb.order_of_key((v[i] + v[i + 1]));
            // cout<<need<<" ";
            ans = min(ans, (i+need));
        }
        cout<<ans<<'\n';
    }
    return 0;
}