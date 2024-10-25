/*
    Author: Anas
    Date:   23-10-2024
    Time:   18:28:43
    File:   A_Strange_Partition.cpp
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
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        vector<ll>v(n);
        ll cnt=0;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            cnt+=(v[i]/k);
            if(v[i]%k!=0)
            {
                cnt++;
            }
            sum+=v[i];
        }
        ll mn=(sum/k);
        if(sum%k!=0)
        {
            mn++;
        }
        cout<<mn<<" "<<cnt<<"\n";

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
