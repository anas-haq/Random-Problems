/*
    Author: Anas
    Date:   13-11-2024
    Time:   12:13:48
    File:   B_Replacement.cpp
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
        string s,r;cin>>s>>r;
        ll one=count(s.begin(),s.end(),'1');
        ll zero=n-one;
        for (ll i = 0; i <n-1; i++)
        {
            if(zero==0 || one==0)
            {
                cout<<"NO\n";
                return;
            }
            if(r[i]=='1')
            {
                zero--;
            }
            else
            {
                one--;
            }            
        }
        cout<<"YES\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
