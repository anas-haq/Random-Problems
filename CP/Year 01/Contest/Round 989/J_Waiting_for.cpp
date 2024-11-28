/*
    Author: Anas
    Date:   25-11-2024
    Time:   17:51:43
    File:   J_Waiting_for.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;
    ll sum=0;
    auto Anas = [&]() {
        char a;ll x;
        cin>>a>>x;
        if(a=='P')
        {
            sum+=x;
        }
        else
        {
            sum-=x;
            if(sum<0)
            {
                cout<<"YES\n";
                sum=0;
            }
            else
            {
                cout<<"NO\n";
            }            
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
