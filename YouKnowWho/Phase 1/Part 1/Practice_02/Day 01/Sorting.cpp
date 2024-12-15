/*
    Author: Anas
    Date:   15-12-2024
    Time:   10:54:02
    File:   Sorting.cpp
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
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                if(v[i]>v[j]){
                    swap(v[i],v[j]);
                }
            }
        }
        for(auto i:v)cout<<i<<" ";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
