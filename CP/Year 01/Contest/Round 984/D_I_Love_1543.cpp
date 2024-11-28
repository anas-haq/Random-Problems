/*
    Author: Anas
    Date:   03-11-2024
    Time:   01:12:16
    File:   D_I_Love_1543.cpp
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
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, (vector<char>(m)));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        string s;
        ll z = min(n, m);
        z /= 2;
        ll cnt = 0;
        for (int i = 0; i < z; i++)
        {
            string s = "";
            for (int j = i; j < m - i; j++)
            {
                s += v[i][j];
            }
            for (int j = i + 1; j < n - i; j++)
            {
                s += v[j][m - i - 1];
            }
            for (int j = m - i - 2; j >= i; j--)
            {
                s += v[n - i - 1][j];
            }
            for (int j = n - i - 2; j >= i; j--)
            {
                s += v[j][i];
            }
            s += v[i][i + 1];
            if (i + 2 < m - i)
            {
                s += v[i][i + 2];
            }
            else
            {
                s += v[i + 1][i + 1];
            }
            for (int k = 0; k < s.size() - 3; k++)
            {
                if (s[k] == '1' and s[k + 1] == '5' and s[k + 2] == '4' and s[k + 3] == '3')
                    cnt++;
            }
            // cout<<s<<endl;
        }

        cout << cnt << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
