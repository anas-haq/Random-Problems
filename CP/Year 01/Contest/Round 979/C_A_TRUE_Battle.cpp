/*
    Author: Anas
    Date:   19-10-2024
    Time:   20:38:57
    File:   C_A_TRUE_Battle.cpp
*/
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string k = "11";
        for (ll i = 0; i < n - 1; i++)
        {
            string j = s.substr(i, 2);
            if (j == k)
            {
                cout << "YES\n";
                return;
            }
        }
        if (s[0] == '1' || s[n - 1] == '1')
        {
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
