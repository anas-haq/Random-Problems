/*
    Author: Anas
    Date:   17-12-2024
    Time:   19:29:58
    File:   2_D_Array_DS.cpp
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
        vector<vector<int>>v(6,vector<int>(6));
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                cin>>v[i][j];
            }
        }
        int mx = -1e9;
        for(int i = 0; i < 4; i++){
            int sum = 0;
            for(int j = 0; j < 4; j++){
                // cin>>v[i][j];
                sum = v[i][j] + v[i][j+1] + v[i][j+2]+v[i+1][j+1]+v[i+2][j]+v[i+2][j+1]+v[i+2][j+2];
                mx = max(mx,sum);
                // cout<<sum<<"\n";
            }
        }
        cout<< mx;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
