/*
    Author: Anas
    Date:   27-11-2024
    Time:   21:16:48
    File:   Empty_the_String.cpp
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
        ll n;cin>>n;
        string s;cin>>s;

        ll cnt=n;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cnt--;
            }
        }


    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
