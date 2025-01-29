/*
    Author: Anas
    Date:   27-01-2025
    Time:   19:27:29
    File:   Cumulative_Sum_Query.cpp
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
        vector<int>v(n+1),prefix_sum(n+2);
        prefix_sum[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        for(int i = 1; i <= n; i++){
            prefix_sum[i] = v[i] + prefix_sum[i-1];
        }
        int q; cin >> q;
        while (q--){
            int l,r; cin >> l >> r;
            l++, r++;
            cout <<(prefix_sum[r] - prefix_sum[l-1]) <<"\n";
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
