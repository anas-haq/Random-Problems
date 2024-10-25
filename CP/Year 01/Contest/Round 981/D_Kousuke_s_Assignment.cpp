/*
    Author: Anas
    Date:   24-10-2024
    Time:   21:31:09
    File:   D_Kousuke_s_Assignment.cpp
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
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        ll cnt=0;
        set<ll>s;
        ll sum=0;
        s.insert(0);
        for (ll i = 0; i <n; i++)
        {
            sum+=v[i];
            if(s.find(sum)!=s.end())
            {
                cnt++;
                // cout<<sum<<" ";
                sum=0;
                s.clear();
                s.insert(0);
            }
            s.insert(sum);
        }
        cout<<cnt<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
