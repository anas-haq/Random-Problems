/*
    Author: Anas
    Date:   12-11-2024
    Time:   12:40:42
    File:   D_Black_and_White_Stripe.cpp
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll mx = k;
        ll cnt = 0;
        vector<ll>pre(n+1);
        for (ll i = 0; i <n; i++)
        {
            // pre[i]=pre[i-1]+(ll)s[i-1]=='W';
                if(s[i]=='W')
                {
                    cnt++;
                }
                pre[i+1]=cnt;
        }
        // for (ll i = 1; i <=n; i++)
        // {
        //     cout<<pre[i]<<" ";
        // }
        for (ll i = k; i <=n; i++)
        {
            mx=min(mx,abs(pre[i]-pre[i-k]));
        }
        cout<<mx<<"\n";
        
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
