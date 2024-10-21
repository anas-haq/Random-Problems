/*
    Author: Anas
    Date:   21-10-2024
    Time:   17:29:48
    File:   A_Everybody_Likes_Good_Arrays.cpp
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
        vector<ll>v(n),a(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            if(v[i]&1)
            {
                a[i]=1;
            }
            else
            {
                a[i]=0;
            }
            
        }
        ll cnt=0,l=0,r=0;
        for (ll i = 0; i < n-1; i++)
        {
            if(a[i]==a[i+1])            
            {
                l++;
            }
            
        }
        cout<<l<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
