/*
    Author: Anas
    Date:   15-11-2024
    Time:   19:13:52
    File:   B_Erase_First_or_Second_Letter.cpp
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
        string s;
        cin>>s;
        vector<bool>v(26,true);
        ll cnt=0;
        for (ll i = 0; i <n; i++)
        {
            ll c=s[i]-'a';
            if(v[c])
            {
                cnt+=(n-i);
                v[c]=false;
            }
        }
        cout<<cnt<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
