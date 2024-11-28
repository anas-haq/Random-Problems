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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v;

        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        auto cmp = [&](pair<ll, ll>&a, pair<ll, ll>&b)
        {
            ll maxA = max(a.first, a.second);
            ll maxB = max(b.first, b.second);
            if (maxA != maxB)
                return maxA < maxB;
            return min(a.first, a.second) < min(b.first, b.second);
        };

        sort(v.begin(), v.end(), cmp);

        for (auto [x, y] : v)
        {
            cout << x << " " << y << " ";
        }
        cout << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
