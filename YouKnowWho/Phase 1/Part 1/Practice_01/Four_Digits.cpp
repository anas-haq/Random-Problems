/*
    Author: Anas
    Date:   10-12-2024
    Time:   22:47:16
    File:   Four_Digits.cpp
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
        string s;
        cin>>s;
        if(s.size()==4)
        {
            cout<<s;
            return;
        }
        for(ll i=0;i<(4-(s.size()));i++)
        {
            cout<<0;
        }
        cout<<s;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
