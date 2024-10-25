/*
    Author: Anas
    Date:   24-10-2024
    Time:   19:04:59
    File:   A_AB_Balance.cpp
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
        string s;
        cin >> s;
        ll n = s.size();
        ll ab = 0, ba = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                ab++;
            }
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                ba++;
            }
        }
        // cout<<ab<<" "<<ba<<"\n";
        if (ab == ba)
        {
            cout << s << "\n";
            return;
        }
        if (ab > ba)
        {
            if (s[n - 2] == 'a' && s[n - 1] == 'b')
            {
                s[n - 1] = 'a';
                ab--;
            }
            if (s[n - 2] == 'b' && s[n - 1] == 'b')
            {
                s[n - 1] = 'a';
                ba++;
            }
            if (ab > ba)
            {
                for (int i = 0; i < n; i++)
                {
                    if (ab == ba)
                        break;
                    if (s[i] == 'a' && s[i + 1] == 'b')
                    {
                        s[i] = 'b';
                        ab--;
                    }
                }
            }
            cout << s << '\n';
        }
        else
        {
            if (s[0] == 'b' && s[1] == 'b')
            {
                s[0] = 'a';
                ab++;
            }
            if (ba > ab)
            {
                for (int i = 0; i < n; i++)
                {
                    if (ab == ba)
                        break;
                    if (s[i] == 'b' && s[i + 1] == 'a')
                    {
                        s[i] = 'a';
                        ba--;
                    }
                }
            }
            cout << s << '\n';
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
