/*
    Author: Anas
    Date:   17-11-2024
    Time:   20:50:07
    File:   B_Intercepted_Inputs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll N = 1e5 + 9;
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
        map<ll, ll> cnt;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

        n -= 2;

        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i == (n / i))
                {
                    if (cnt[i] >= 2)
                    {
                        cout << i << " " << i << "\n";
                        return;
                    }
                }
                else
                {
                    if (cnt[i] >= 1 and cnt[n / i] >= 1)
                    {
                        cout << i << " " << n / i << "\n";
                        return;
                    }
                }
            }
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
