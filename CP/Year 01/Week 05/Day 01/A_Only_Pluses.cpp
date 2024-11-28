/*
    Author: Anas
    Date:   04-11-2024
    Time:   20:37:46
    File:   A_Only_Pluses.cpp
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
        ll a,b,c;
        cin>>a>>b>>c;
        ll cnt=0;
        for(ll i=0;i<=5;i++)
        {
            for(ll j=0;j<=5;j++)
            {
                for (ll k = 0; k<=5; k++)
                {
                    if(i+j+k==5)
                    {
                        a+=i;b+=j;c+=k;
                        ll ans=a*b*c;
                        cnt=max(ans,cnt);
                        a-=i;b-=j;c-=k;
                    }
                }
                
            }
        }
        cout<<cnt<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
