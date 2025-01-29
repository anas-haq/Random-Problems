/*
    Author: Anas
    Date:   27-01-2025
    Time:   20:09:44
    File:   Almost_GCD.cpp
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
        vector<int>v(n),same;
        for(auto &x:v) cin >> x;
        sort(v.begin(),v.end());
        int val = 0, mx = -1e9;
        for(int i = 2; i < 1005; i++){
            int ans = 0;
            for(int j = 0; j < n; j++){
                if(v[j] % i == 0){
                    ans++;
                }
            }
            if(mx < ans){
                mx = ans;
                val = i;
            }
            
        }
        cout << val <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
