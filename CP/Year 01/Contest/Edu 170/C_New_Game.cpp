#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        
        vector<pair<ll, ll>> v1;
        for (auto [a, b] : mp) {
            v1.push_back({a, b});
        }
        sort(v1.begin(), v1.end());
        
        ll ans = 0;
        for (ll i = 0; i < v1.size(); i++) {
            ll curr = v1[i].second;
            ll distinct = 1;
            ll j = i + 1;
            
            while (j < v1.size() && distinct < k && (v1[j].first == v1[j-1].first + 1 || v1[j].first == v1[j-1].first)) {
                if (v1[j].first != v1[j-1].first) {
                    distinct++;
                }
                curr += v1[j].second;
                j++;
            }
            
            ans = max(ans, curr);
        }
        
        cout << ans << "\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    map<ll,ll>mp;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<pair<ll,ll>>vv;
    ll mx=LLONG_MIN,ans=0;
    for(auto i:mp)
    {
        vv.push_back({i.first,i.second});
    }
    // for(int i=0;i<vv.size();i++) cout<<vv[i].first<<" "<<vv[i].second<<endl;

    ll cur=vv[0].first,x=0;
    ll l=0,r=0;
    while(r<vv.size())
    {
        ll a=vv[r].first;
        ll b=vv[r].second;
        ans+=b;
        
        if((a-cur)>1)
        {
            ans-=b;
            mx=max(mx,ans);
            // cout<<ans<<" ";
            ans=b;
            l=r;
        }
        if((r-l+1)==k)
        {
            mx=max(mx,ans);
            // cout<<ans<<" ";
            ans-=vv[l].second;
            l++;
        }
        cur=a;
        r++;
    }
    cout<<mx<<endl;
}
int main()
{
/*
    Author: FRK
    Date:   14-10-2024
    Time:   21:14:57
    File:   C_New_Game.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}