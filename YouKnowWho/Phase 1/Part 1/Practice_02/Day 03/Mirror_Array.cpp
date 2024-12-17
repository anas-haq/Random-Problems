/*
    Author: Anas
    Date:   16-12-2024
    Time:   15:55:44
    File:   Mirror_Array.cpp
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
        int n, m; cin >> n >> m;
        vector<vector<int>>v(n, vector<int>(m));
        // int v[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < (n); i++){
            for (int j = 0; j < (m>>1); j++){
                swap(v[i][j],v[i][m-j-1]);
            }
        }
        // cout<<m<<" ";
       for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
            cout<< v[i][j]<<" ";
            }
            cout<<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
