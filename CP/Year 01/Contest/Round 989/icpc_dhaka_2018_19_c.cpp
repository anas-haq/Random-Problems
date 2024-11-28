/*
    Author: Anas
    Date:   25-11-2024
    Time:   19:00:30
    File:   icpc_dhaka_2018_19_c.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e7 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    // cin >> test;
    ll n;
    auto Anas = [&]()
    {
        while (cin >> n)
        {
            if(n==0)
            {
                // cout<<"\n";
                continue;
            }
            ll ans = 1 % mod;
            for (ll i = 1; i <= n; i++)
            {
                ans = ((ans % mod) * (i % mod)) % mod;
            }

            vector<int> divisors;
            for (int i = 1; i * i <= ans; i++)
            {
                if (ans % i == 0)
                {
                    divisors.push_back(i);
                    if ((ans / i) != i)
                    {
                        divisors.push_back(ans / i);
                    }
                }
            }
            sort(divisors.begin(), divisors.end());
            ll cnt=0;
            for (auto x : divisors)
            {
                // cout << value << " ";
                vector<int> v;
                for (int i = 1; i * i <= x; i++)
                {
                    if (x % i == 0)
                    {
                        v.push_back(i);
                        if ((x / i) != i)
                        {
                            v.push_back(x / i);
                        }
                    }
                }
                cnt+=v.size();
                v.empty();
            }

            cout<<cnt<<"\n";
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
