/*
    Author: Anas
    Date:   04-10-2024
    Time:   19:59:51
    File:   A_Find_Minimum_Operations.cpp
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
        ll n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << n << "\n";
            return;
        }
        auto l=[&](ll n,ll k)
        {
            ll i=1;
            while (i*k<=n)
            {
                i*=k;
            }
            return i;            
        };
        ll ans = 0;
        while (k<=n)
        {
            n-=l(n,k);
            ans++;
        }
        cout<<ans+n<<"\n";
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
