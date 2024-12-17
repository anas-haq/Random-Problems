/*
    Author: Anas
    Date:   17-12-2024
    Time:   18:38:50
    File:   Preparing_Olympiad.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n, l, r, x; cin >> n >> l >> r >> x;
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        int ways = 0;
        for(int mask = 0; mask < (1<<n); mask++){
            int cnt = 0, mn = 1e9, mx = 0, total_sum = 0;
            for (int i = 0; i < n; i++){
                if((mask>>i)&1){
                    total_sum+=v[i];
                    mn = min(mn,v[i]);
                    mx = max(mx,v[i]);
                    cnt++;
                }
            }
            if(total_sum >= l and total_sum <= r and cnt >= 2 and mx-mn >= x){
                ways++;
            }
        }
        cout << ways <<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
