/*
    Author: Anas
    Date:   25-10-2024
    Time:   18:24:42
    File:   D_Deletive_Editing.cpp
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
        string s1, s2;
        cin >> s1 >> s2;
        ll n = s1.size(), m = s2.size();

        if (s1 == s2)
        {
            cout << "YES" << "\n";
            return;
        }
        map<char, ll> mp1, mp2;
        for (ll i = 0; i < n; i++)
        {
            mp1[s1[i]]++;
        }
        for (ll i = 0; i < m; i++)
        {
            mp2[s2[i]]++;
        }
        ll i = 0, j = 0;
        while (i < n && j < m)
        {
            if (s1[i] == s2[j])
            {
                if (mp1[s1[i]] < mp2[s2[j]])
                {
                    cout << "NO\n";
                    return;
                }
                if (mp1[s1[i]] == mp2[s2[j]])
                {
                    mp2[s2[j]]--;
                    j++;
                }
            }
            mp1[s1[i]]--;
            i++;
        }
        if (j == m)
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
