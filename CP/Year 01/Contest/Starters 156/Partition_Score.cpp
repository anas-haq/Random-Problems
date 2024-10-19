/*
    Author: Anas
    Date:   16-10-2024
    Time:   21:21:14
    File:   Partition_Score.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n, j, f;
        cin >> n >> f;
        vector<ll> a, b, v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        a.push_back(v[0]);
        b.push_back(v[1]);
        f--;
        for (ll i = 2; i < n; i++)
        {
            if (f == 0)
            {
                j = i;
                break;
            }
            a.push_back(v[i]);
            f--;
        }
        for (ll i = j; i < n; i++)
        {
            b.push_back(v[i]);
        }
        ll min_a = INT_MAX, min_b = INT_MAX, max_a = INT_MIN, max_b = INT_MIN;
        for (ll i = 0; i < a.size(); i++)
        {
            min_a = min(a[i], min_a);
            max_a = max(a[i], max_a);
        }
        for (ll i = 0; i < b.size(); i++)
        {
            min_b = min(b[i], min_b);
            max_b = max(b[i], max_b);
        }

        ll ans = min_a + min_b + max_a + max_b;
        cout << ans << "\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
