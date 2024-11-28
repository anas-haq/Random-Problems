/*
    Author: Anas
    Date:   26-11-2024
    Time:   22:50:39
    File:   B_Construct_the_String.cpp
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
        ll n,a,b,cnt=0;
        cin>>n>>a>>b;
        string k="",p="";
        for (char i = 'a'; i <='z'; i++)
        {
            k+=i;
            cnt++;
            if(cnt==b)
            {
                break;
            }
        }
        // cout<<k;
        ll x=n/b;
        ll y=n%b;
        for(ll i=0;i<x;i++)
        {
            p+=k;
        }
        for(ll i=0;i<y;i++)
        {
            p+=k[i];
        }
        cout<<p<<"\n";
        
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
