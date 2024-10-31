/*
    Author: Anas
    Date:   30-10-2024
    Time:   20:33:13
    File:   Even_vs_Odd_Divisors.cpp
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
        vector<int> divisors;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
                if ((n / i) != i)
                {
                    divisors.push_back(n / i);
                }
            }
        }

        sort(divisors.begin(), divisors.end());
        vector<ll>a,b;
        for (ll i = 0; i <(ll)divisors.size() ; i++)
        {
            if(divisors[i]&1)
            {
                a.push_back(divisors[i]);
            }
            else
            {
                b.push_back(divisors[i]);
            }
            
        }
        ll x=a.size(),y=b.size();
        if(x==y)
        {
            cout<<"0\n";
        }
        else if(x>y)
        {
            cout<<"-1\n";
        }
        else 
        {
            cout<<"1\n";
        }
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
