/*
    Author: Anas
    Date:   28-11-2024
    Time:   18:59:37
    File:   B_Binary_Period.cpp
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
        string s,t="";
        cin>>s;

        ll n=s.size();
        if(n<=2)
        {
            cout<<s<<"\n";
            return;
        }

        bool ok=true;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            cout<<s<<"\n";
            return;
        }
        if(s[0]=='1')
        {
            for(ll i=0;i<n;i++)
            {
                t+='1';
                t+='0';
            }
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                t+='0';
                t+='1';
            }
        }
        
        
        cout<<t<<"\n";


        

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
