/*
    Author: Anas
    Date:   15-12-2024
    Time:   11:01:35
    File:   Smallest_Pair.cpp
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
        int n;cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        int mn=1e9;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum=v[i]+v[j]+j-i;
                mn=min(sum,mn);
            }
        }
        cout<<mn<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
