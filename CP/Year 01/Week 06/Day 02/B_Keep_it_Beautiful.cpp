/*
    Author: Anas
    Date:   26-11-2024
    Time:   18:57:23
    File:   B_Keep_it_Beautiful.cpp
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin >> test;

    while (test--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> ans;
        bool flag = false;
        string s(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans.push_back(a[i]);
                s[i] = '1';
            }
            else if (!flag)
            {
                if (a[i] >= ans.back())
                {
                    ans.push_back(a[i]);
                    s[i] = '1';
                }
                else if (ans[0] >= a[i])
                {
                    flag = true;
                    s[i] = '1';
                    ans.push_back(a[i]);
                }
            }
            else
            {
                if (a[i] >= ans.back() && a[i] <= ans[0])
                {
                    s[i] = '1';
                    ans.push_back(a[i]);
                }
            }
        }
        cout << s << "\n";
    }

    return 0;
}
