/*
    Author: Anas
    Date:   13-11-2024
    Time:   21:30:01
    File:   Equate_S_and_T.cpp
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
        ll n,m;
        cin>>n>>m;
        string s1,s2;cin>>s1>>s2;
        ll a1=count(s1.begin(),s1.end(),'a');
        ll a2=count(s2.begin(),s2.end(),'a');
        ll b1=0,b2=0;
        for(ll i=0;i<n;i++)
        {
            if(s1[i]=='b')
            {
                b1++;
            }
            else
            {
                break;
            }            
        }
        for(ll i=0;i<m;i++)
        {
            if(s2[i]=='b')
            {
                b2++;
            }
            else
            {
                break;
            }            
        }

        if(a1==a2 && b1==b2)
        {
            cout<<"Yes\n";
            return;
        }
        cout<<"No\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
