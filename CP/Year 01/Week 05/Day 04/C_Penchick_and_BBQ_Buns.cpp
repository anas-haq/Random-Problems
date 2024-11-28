#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll cur=1, n; cin>>n;
    vector<ll>v(n,-1);
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        if(v[i]==-1)
        {
            v[i]=cur;
            cur++;
        }
        
        ll a=v[i];
        for(int j=2;j<n;j++)
        {
            if(j*j>=n)break;
            v[i+(j*j)]=a;
            // cout<<j*j<<endl;
        }
     

    }   
    for(int i=0;i<n;i++)
    {
        // cout<<v[i]<<" ";
        mp[v[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second<2){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
        // mp[v[i]]++;
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}