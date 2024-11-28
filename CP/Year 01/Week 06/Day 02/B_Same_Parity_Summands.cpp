/*
    Author: Anas
    Date:   27-11-2024
    Time:   00:28:15
    File:   B_Same_Parity_Summands.cpp
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
        ll n, k;
        cin >> n >> k;
        vector<ll> ans;
        if (n >= k && n % 2 == k % 2)
        {
            for (ll i = 1; i < k; i++)
                ans.push_back(1);
            ans.push_back(n - k + 1);
        }
        else if (n >= k * 2 && n % 2 == 0)
        {
            for (ll i = 1; i < k; i++)
                ans.push_back(2);
            ans.push_back(n - 2 * k + 2);
        }
        if (ans.size())
        {
            cout << "YES\n";
            for (auto x : ans)
                cout << x << ' ';
            cout << '\n';
        }
        else
            cout << "NO\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
