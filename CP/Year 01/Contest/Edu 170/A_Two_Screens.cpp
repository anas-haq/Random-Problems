/*
    Author: Anas
    Date:   14-10-2024
    Time:   20:40:22
    File:   A_Two_Screens.cpp
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
        if (s1.size() > s2.size())
            swap(s1, s2);

        ll n = s1.size(), m = s2.size();
        if (s1[0] != s2[0])
        {
            cout << n + m << "\n";
            return;
        }
        ll cnt = 0, j = 0;
        for (ll i = 0; i < n; i++)
        {
            // string s=s2.substr(i,n);

            if (s1[i] != s2[i])
            {
                cnt = i;
                break;
            }
            j++;
        }
        ll sum = (n - j) + (m - j) + j + 1;
        cout << sum << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
