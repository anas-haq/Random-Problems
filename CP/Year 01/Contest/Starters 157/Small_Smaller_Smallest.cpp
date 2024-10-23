/*
    Author: Anas
    Date:   23-10-2024
    Time:   21:36:30
    File:   Small_Smaller_Smallest.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        ll zero=0,one=0;
        string s;cin>>s;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
            
        }

        if(zero==n)
        {
            cout<<n<<"\n";
        }
        else{
            if(one&1)
            {
                cout<<1<<"\n";
            }
            else
            {
                cout<<0<<"\n";
            }            
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
