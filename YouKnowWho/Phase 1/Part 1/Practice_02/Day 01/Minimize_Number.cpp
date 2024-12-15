/*
    Author: Anas
    Date:   15-12-2024
    Time:   11:38:10
    File:   Minimize_Number.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    auto Anas = [&]()
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
       
        ll mn = 1e18;
        for (int i = 0; i < n; i++)
        {
            ll cnt = 0;
            ll x = v[i];
            while (x >= 1)
            {
                if (x & 1)
                {
                    mn = min(mn, cnt);
                    break;
                }
                x >>= 1;
                cnt++;
            }
        }
        cout << mn;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
