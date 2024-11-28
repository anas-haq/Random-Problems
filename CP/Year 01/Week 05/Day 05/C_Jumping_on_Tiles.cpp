/*
    Author: Anas
    Date:   16-11-2024
    Time:   21:02:10
    File:   C_Jumping_on_Tiles.cpp
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
        string s;
        cin >> s;

        ll n = s.size();
        map<ll, vector<ll>> mp;

        for (ll i = 0; i < n; i++)
        {
            mp[s[i] - '0'].push_back(i);
        }
        
        ll x = s[0] - '0', y = s[s.size() - 1] - '0';
        ll d = abs((s[0] - '0') - (s[s.size() - 1] - '0'));

        // cout<<d<<endl;
        vector<ll>v;
        if (x <= y)
        {
            for (int i = x; i <= y; i++)
            {
                for (auto a : mp[i])
                    v.push_back(a + 1);
            }
        }
        else
        {
            for (int i = y; i <= x; i++)
            {
                for (int j = mp[i].size() - 1; j >= 0; j--)
                    v.push_back(mp[i][j] + 1);
            }
            reverse(v.begin(), v.end());
        }
        cout << d << " " << v.size() << endl;
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
