
/*
    Author: Anas
    Date:   24-10-2024
    Time:   22:09:41
    File:   C_Sakurako_s_Field_Trip.cpp
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
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        for (ll i = 1; i < n / 2; i++)
            if (a[i] == a[i - 1] || a[n - i] == a[n - i - 1])
            {
                swap(a[i], a[n - i - 1]);
            }

        int ans = 0;
        for (ll i = 1; i < n; i++)
            ans += (a[i] == a[i - 1]);
        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
