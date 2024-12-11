/*
    Author: Anas
    Date:   11-12-2024
    Time:   13:47:27
    File:   Beautiful_Year.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        string s=to_string(n);
       
        for(ll i=n+1;;i++)
        {
            string k=to_string(i);
            set<ll>st;
            for(ll j=0;j<k.size();j++)
            {
                ll a=k[j]-'0';
                st.insert(a);
            }
            ll x=st.size();
            // cout<<x<<" ";
            ll y=s.size();
            //  cout<<y<<" ";
            if(x==y)
            {
                cout<<k;
                return;
            }
            st.clear();
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
