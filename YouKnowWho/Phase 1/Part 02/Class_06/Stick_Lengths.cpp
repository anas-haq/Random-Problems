/*
    Author: Anas
    Date:   22-03-2025
    Time:   01:12:49
    File:   Stick_Lengths.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        sort(v.begin(),v.end());
        int median = (n) >> 1;
        // cout << median;
        median = v[median];
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans+=abs(v[i]-median);
        }
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
