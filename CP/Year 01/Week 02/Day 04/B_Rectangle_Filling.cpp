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
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m));

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        bool ok = true;
        char a = v[0][0];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (v[i][j] != a)
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
                break;
        }
        if (ok)
        {
            cout << "YES\n";
            return;
        }
        if ((v[0][0] == v[n - 1][m - 1]) || (v[0][m - 1] == v[n - 1][0]) )
        {
            cout << "YES" <<'\n';
            return;
        }

        bool ok1 = false, flag2 = false;
        bool ok2 = false, flag1 = false;

        for (ll i = 1; i < m; i++)
        {
            if (v[0][0] != v[0][i])
            {
                ok1 = true;
                break;
            }
        }

        for (ll i = 1; i < m; i++)
        {
            if (v[n - 1][0] != v[n - 1][i])
            {
                flag2 = true;
                break;
            }
        }

        for (ll i = 1; i < n; i++)
        {
            if (v[0][0] != v[i][0])
            {
                ok2 = true;
                break;
            }
        }

        for (ll i = 1; i < n; i++)
        {
            if (v[0][m - 1] != v[i][m - 1])
            {
                flag1 = true;
                break;
            }
        }

        if ((ok1 || flag2) && (ok2 || flag1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
