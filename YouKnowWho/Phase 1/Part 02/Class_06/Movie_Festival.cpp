/*
    Author: Anas
    Date:   22-03-2025
    Time:   00:56:42
    File:   Movie_Festival.cpp
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
        vector<pair<int,int>>v;
        for(int i = 1; i <= n; i++){
            int l, r; cin >> l >> r;
            v.push_back({l,r});
        }
        sort(v.begin(),v.end(),[](pair<int,int>x, pair<int,int>y){
            return x.second < y.second;
        });
        int mx_end = -1, ans = 0;
        for(auto [start, end]:v){
            if(start >= mx_end){
                mx_end = end;
                ans++;
            }
        }
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
