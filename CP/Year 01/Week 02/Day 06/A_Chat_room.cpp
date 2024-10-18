/*
    Author: Anas
    Date:   18-10-2024
    Time:   23:45:43
    File:   A_Chat_room.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        string s,ans="hello";
        cin>>s;
        ll l=0,r=0;
        ll n=s.size();
        for (ll i = 0; i <n; i++)
        {
            if(s[i]==ans[l])        
            {
                l++;
                r++;  
            }
        }
        if(r==5)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
