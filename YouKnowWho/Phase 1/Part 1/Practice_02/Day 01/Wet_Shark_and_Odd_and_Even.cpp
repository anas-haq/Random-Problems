/*
    Author: Anas
    Date:   14-12-2024
    Time:   22:52:09
    File:   Wet_Shark_and_Odd_and_Even.cpp
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
        int n;
        cin>>n;

        ll sum=0;
        
        vector<ll>v(n),odd;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]&1){
                odd.push_back(v[i]);
            }
        }

        sort(odd.begin(),odd.end());

        if(sum&1){
            sum-=odd[0];
            cout<<sum;
        }
        else{
            cout<<sum;
        }

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
