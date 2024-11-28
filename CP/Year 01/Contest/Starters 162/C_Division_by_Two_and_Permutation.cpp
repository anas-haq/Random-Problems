/*
    Author: Anas
    Date:   27-11-2024
    Time:   23:29:46
    File:   C_Division_by_Two_and_Permutation.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            // if(i==v[i])            
            // {
            //     s.insert(i);
            // }
            // else
            // {
                ll k=v[i];
                while (k>0)
                {
                    if(k<=n)
                    {
                        if(s.find(k)==s.end())                        
                        {
                            s.insert(k);
                            break;
                        }
                    }
                    k>>=1;
                }                
            // }            
        }
        
        if(s.size()<n)
        {
            cout<<"NO\n";
            return;
        }

        cout<<"YES\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
