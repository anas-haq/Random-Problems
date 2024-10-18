/*
    Author: Anas
    Date:   18-10-2024
    Time:   22:51:05
    File:   A_Expression.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    auto Anas = [&]()
    {
        ll a, b, c;
        cin >> a >> b >> c;

        // 1 + 2 * 3 = 7
        // 1 * (2 + 3) = 5 
        // 1 * 2 * 3 = 6
        // (1 + 2) * 3 = 9
        ll x=a+b+c;
        ll p=a*b*c;
        ll i=(a+b)*c;
        ll y=(a*b)+c;
        ll o=a*(b+c);
        
        ll l=(a+b)+c;
        ll ans=max({i,o,p,l,x,y});
        cout<<ans;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
