/*
    Author: Anas
    Date:   04-10-2024
    Time:   19:51:38
    File:   B_Brightness_Begins.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll k;
        cin>>k;
        ll l=0,r=4e18,ans=4e18,mid;
        while (l<=r)
        {
            mid=(l+r)/2;
            ll on=mid-(ll)sqrtl(mid);
            if(on<k)
            {
                l=mid+1;
            }
            else 
            {
                ans=mid;
                r=mid-1;
            }
        }
        cout<<ans<<"\n";        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
