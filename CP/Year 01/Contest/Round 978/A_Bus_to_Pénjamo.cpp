/*
    Author: Anas
    Date:   14-10-2024
    Time:   16:25:15
    File:   A_Bus_to_Pénjamo.cpp
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
        ll n, r,h=0,cnt=0,x=0;
        cin >> n >> r;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            h+=((v[i]/2)*2);
            r-=v[i]/2;
            cnt+=v[i]%2;
        }
        cout<<h+min(2*r-cnt,cnt)<<"\n";
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
