/*
    Author: Anas
    Date:   18-11-2024
    Time:   12:24:37
    File:   D_Sharky_Surfing.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    ll n, m, last;
        cin >> n >> m >> last;

        pbds<ll> pb;
        vector<pair<ll, ll>> a(n), b(m);

        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            a[i] = {x, y};
        }
        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            b[i] = {x, y};
            pb.insert(x);
        }

        // ll x = a[0].first, y = a[0].second;
        // ll diff = y - x;
        // ll z = pb.order_of_key(x);

        // cout << z;
        ll cnt=0;
        priority_queue<ll>pq;
        ll c=0,sum=0;
        for (ll i = 0; i <n; i++)
        {
            ll x=a[i].first,y=a[i].second;
            ll diff=(y-x)+1;
            ll z=pb.order_of_key(x);            
            for (ll j = c; j <z and j<m; j++)
            {
                pq.push(b[j].second);
            }
            bool ok=true;
            if(sum<diff)
            {
                while (!pq.empty())
                {
                    sum+=pq.top();
                    pq.pop();
                    cnt++;
                    if(sum>=diff)
                    {
                        ok=false;
                        break;
                    }
                }
                // sum=0;
                if(ok)               
                {
                    cout<<"-1\n";
                    return;
                }
            }
            c=z;                    

        }
        cout<<(cnt)<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}