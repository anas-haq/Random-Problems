/*
    Author: Anas
    Date:   23-11-2024
    Time:   10:19:45
    File:   C_Registration_system.cpp
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
    map<string, ll> mp;
    auto Anas = [&]()
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            cout << "OK\n";
            mp[s] = 0;
        }
        else
        {
            mp[s]++;
            ll x = mp[s];
            cout << s << x << "\n";
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
