/*
    Author: Anas
    Date:   07-11-2024
    Time:   17:55:23
    File:   B_Divan_and_a_New_Project.cpp
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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        vector<ll> cp(n);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a[i] = {x, i};
            cp[i] = x;
        }
        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        bool flag = false;
        vector<ll>ar(n+1);
        ar[0] = 0;
        ll c = 1;
        for (ll i = 0; i < n; i++)
        {
            ll idx = a[i].second;
            if (!flag)
            {
                ar[idx + 1] = c;
                flag = true;
            }
            else
            {
                ar[idx + 1] = -c;
                flag = false;
                c++;
            }
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll dis = abs(ar[i]) * cp[i - 1];
            ans += (2 * dis);
        }
        cout << ans << "\n";
        for (ll i = 0; i <= n; i++)
            cout << ar[i] << " ";
        cout << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
