/*
    Author: Anas
    Date:   21-10-2024
    Time:   18:17:20
    File:   C_Prepend_and_Append.cpp
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
        string s;
        cin>>s;
        ll cnt=0;
        for (ll i = 0; i <n; i++)
        {
            if(s[i]!=s[n-1-i])
            {
                cnt++;
            }
            else
            {
                break;
            }
            
        }
        cnt*=2;
        ll ans=n-cnt;
        if(ans>0)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<"0\n";
        }


    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
