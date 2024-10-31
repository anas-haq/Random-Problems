/*
    Author: Anas
    Date:   30-10-2024
    Time:   20:45:24
    File:   Largest_Subsequence.cpp
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
        ll cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
        // string s1 = "ba";
        // if (s == s1)
        // {
        //     cout << 2 << "\n";
        //     return;
        // }
        for (int i = 0; i < n - 1; i++)
        {
            if (s.substr(i, 2) == "ab")
            {
                cnt2++;
            }
            else if (s.substr(i, 2) == "ba")
            {
                cnt3++;
            }
        }
        if (cnt2 == cnt3)
        {
            cout << n << "\n";
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[0] == s[i])
                cnt1++;
            else
                break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[n-1] == s[i])
                cnt++;
            else
                break;
        }

        cout << n - min(cnt1, cnt) << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
