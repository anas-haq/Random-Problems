/*
    Author: Anas
    Date:   16-12-2024
    Time:   15:44:47
    File:   Diagonal_Difference.cpp
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
        int n; cin >> n;
        vector<vector<int>>v(n,vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i == j){
                    sum1+=v[i][j];
                }
            }
        }
        // cout << sum1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i + j == n-1){
                    sum2+=v[i][j];
                }
            }
        }
        int ans = abs(sum1 - sum2);
        cout << ans;
        // for(auto i:v){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<"\n";
        // }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
