/*
    Author: Anas
    Date:   06-10-2024
    Time:   12:11:31
    File:   A_Meaning_Mean.cpp
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll sum = a[0];
        for (int j = 1; j < n; j++)
        {
            ll x = (a[j] + sum) / 2;
            sum = x;
        }
        cout << sum << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
