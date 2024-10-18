/*
    Author: Anas
    Date:   18-10-2024
    Time:   22:41:54
    File:   A_Lucky_Division.cpp
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
        ll n;
        cin>>n;
        string s=to_string(n);
        ll m=s.size();
        bool ok=true;
        for(ll i=0;i<m;i++)
        {
            if(s[i]!='4' && s[i]!='7')
            {
                // cout<<2<<" ";
                ok=false;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
            return;
        }
        if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%474==0 ||n%774==0 || n%747==0)
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
