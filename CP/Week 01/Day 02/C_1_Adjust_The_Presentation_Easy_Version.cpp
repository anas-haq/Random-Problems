#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    auto solve = [&]()
    {
        ll n, m, k, i, j;
        cin >> n >> m >> k;
        vector<ll> v1(n), v2(m);
        vector<bool> vis(n + 1);
        for (i = 0; i < n; i++)
            cin >> v1[i];
        for (i = 0; i < m; i++)
            cin >> v2[i];
        j = 0;
        for (i = 0; i < m && j < n; i++)
        {
            if (vis[v2[i]])
                continue;
            if (v1[j] != v2[i])
            {
                cout << "TIDAK\n";
                return;
            }
            else
            {
                vis[v2[i]] = true;
                j++;
            }
        }
        cout << "YA\n";
    };

    while (t--)
    {
        solve();
    }

    return 0;
}