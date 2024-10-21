/*
    Author: Anas
    Date:   21-10-2024
    Time:   18:24:34
    File:   A_Walking_Master.cpp
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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)
        {
            cout<<"-1\n";
            return;
        }
        ll ans=d-b;
        a+=ans;
        if(a<c)
        {
            cout<<"-1\n";
            return;
        }
        cout<<ans+(a-c)<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
