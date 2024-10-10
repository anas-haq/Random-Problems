/*
    Author: Anas
    Date:   06-10-2024
    Time:   17:20:41
    File:   A_Meaning_Mean.cpp
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
        ll n;
        cin>>n;
        vector<ll>v(n);
        deque<ll>d;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }  
        sort(v.begin(),v.end());
        ll ans=(v[0]+v[1])/2;
        for (ll i =2; i <n; i++)
        {
            ans=((ans+v[i])/2);
        }
        cout<<ans<<"\n";
        
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
