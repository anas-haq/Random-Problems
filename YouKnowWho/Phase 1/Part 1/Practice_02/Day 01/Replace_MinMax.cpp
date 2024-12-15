/*
    Author: Anas
    Date:   15-12-2024
    Time:   11:23:01
    File:   Replace_MinMax.cpp
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
        int n;cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        int mn_idx=-1,mx_idx=-1;
        int mn=1e9,mx=-1e9;
        for(int i=0;i<n;i++){
            if(mx<v[i]){
                mx=v[i];
                mx_idx=i;
            }
            if(mn>v[i]){
                mn=v[i];
                mn_idx=i;
            }
        }
        swap(v[mx_idx],v[mn_idx]);
        for(auto i:v)cout<<i<<" ";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
