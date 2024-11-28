#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll vv(ll x,ll y,ll mid)
{
    ll cnt=0;
    y+=mid;
    cnt+=mid;
    while(x>0)
    {
        x/=y;
        cnt++;
    }
    return cnt;
}

void solve()
{
    ll a,b,mn=1e9; cin>>a>>b;
    
    ll l=0,r=1e9,mid;
    ll x=a,y=b,an=0;
    if(y==1){
        y++;an++;
    }
    while(l<r)
    {
        mid=(l+r)/2;
        if(mn>vv(x,y,mid))
        {
            r=mid-1;
            mn=min(vv(x,y,mid),mn);
        }
        else l=mid+1;
    }
    cout<<mn+an<<endl;
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