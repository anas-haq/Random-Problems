/*
    Author: Anas
    Date:   27-01-2025
    Time:   19:39:38
    File:   Kuriyama_Mirai_s_Stones.cpp
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
        vector<ll>v(n+1), prefix_sum(n+2), prefix_sum_sort(n+2);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        prefix_sum[0] = 0;
        prefix_sum_sort[0] = 0;
        for(int i = 1; i <= n; i++){
            prefix_sum[i] = prefix_sum[i-1] + v[i];
        }
        sort(v.begin(),v.end());
        for(int i = 1; i <= n; i++){
            prefix_sum_sort[i] = prefix_sum_sort[i-1] + v[i];
        }
        int q; cin >> q;
        while(q--){
            int type, l, r; cin >> type >> l >> r;
            if(type == 1){
                cout <<(prefix_sum[r] - prefix_sum[l-1]) <<"\n";
                continue;
            }
            cout << (prefix_sum_sort[r] - prefix_sum_sort[l-1]) <<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
