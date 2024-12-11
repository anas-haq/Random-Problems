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
    auto isPrime = [&](ll n)
    {
        ll total_div = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                total_div++;
            }
        }
        if (total_div == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    auto alMostPrime = [&](ll n)
    {
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (isPrime(i))
                {
                    ans++;
                }
            }
        }
        if (ans == 2)
        {
            return true;
        }
        else
            return false;
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
