/*
    Author: Anas
    Date:   11-12-2024
    Time:   17:38:38
    File:   Almost_Prime.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    // cin >> test;

    auto alMostPrime = [&](ll n)
    {
        set<ll> s;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    s.insert(i);
                    n /= i;
                }
            }
        }
        if (n > 1)
        {
            s.insert(n);
        }
        return s.size()==2;
    };
    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (alMostPrime(i))
            {
                ans++;
            }
        }

        cout << ans;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
