
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        for (auto &x : v)
            cin >> x;
        for (ll i = 0; i < n - 2; i++)
        {
            if (abs(v[i + 1] - v[i]) == 1 && abs(v[i] - v[i + 2]) == 1)
            {
                swap(v[i], v[i + 1]);
            }
        }
        bool ok = true;
        // for(auto x:v)cout<<x<<" ";
        for (ll i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cout << "NO\n";
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
    }

    return 0;
}