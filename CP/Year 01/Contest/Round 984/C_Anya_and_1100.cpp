/*
    Author: Anas
    Date:   02-11-2024
    Time:   21:14:04
    File:   C_Anya_and_1100.cpp
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

        auto check = [&](ll k)
        {
            return ((k + 3 < s.size() && k >= 0) && s[k] == '1' && s[k + 1] == '1' && s[k + 2] == '0' && s[k + 3] == '0') ? true : false;
        };

        
        set<ll> st;
        for (ll i = 0; i < s.size(); i++)
        {
            if ((i + 3 < s.size() && i >= 0) && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
                st.insert(i);
        }

        ll qc;
        cin >> qc;

        while (qc--)
        {
            ll x;
            cin >> x;
            char y;
            cin >> y;
            x--;

            for (ll i = x - 3; i <= x; i++)
            {
                if (check(i))
                    st.erase(i);
            }
            s[x] = y;
            for (ll i = x - 3; i <= x; i++)
            {
                if (check(i))
                    st.insert(i);
            }
            if (st.size())
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
