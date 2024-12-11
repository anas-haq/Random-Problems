/*
    Author: Anas
    Date:   11-12-2024
    Time:   10:15:02
    File:   Sum_of_Three_Integers.cpp
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

    auto Anas = [&]()
    {
        ll a, b;
        cin >> a >> b;

        ll cnt = 0;

        for(ll i=0;i<=a;i++)
        {
            for(ll j=0;j<=a;j++)
            {
                ll x=b-i-j;
                if(x>=0 and x<=a)
                {
                    cnt++;
                }
            }
        }

        cout<<cnt;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
