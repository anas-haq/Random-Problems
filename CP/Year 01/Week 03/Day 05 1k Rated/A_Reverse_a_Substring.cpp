/*
    Author: Anas
    Date:   28-10-2024
    Time:   16:09:22
    File:   A_Reverse_a_Substring.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        for (ll i = 0; i <n-1; i++)
        {
            if(s[i]>s[i+1])
            {
                cout<<"YES\n";
                cout<<i+1<<" "<<i+2<<"\n";
                return;
            }
        }
        cout<<"NO\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
