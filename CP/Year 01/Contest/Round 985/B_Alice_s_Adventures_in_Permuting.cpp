/*
    Author: Anas
    Date:   13-11-2024
    Time:   18:58:13
    File:   B_Alice_s_Adventures_in_Permuting.cpp
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
        ll n,b,c;
        cin>>n>>b>>c;
        if(b==0)
        {
            if(c>=n)
            {
                cout<<n<<"\n";
            }
            else if(c==n-1 || c==n-2)
            {
                cout<<n-1<<"\n";
            }
            else{
                cout<<"-1\n";
            }
            return;
        }
        ll k=((n-c+b-1)/b);
        ll ans=n-max(k,0LL);
        cout<<ans<<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
