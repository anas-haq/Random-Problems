/*
    Author: Anas
    Date:   23-12-2024
    Time:   21:32:34
    File:   X_The_maximum_path_sum.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
ll max_sum;
const int N=15;
vector<vector<int>>v(N,vector<int>(N));
void solve(int i, int j, ll total_sum){
    if(i == n and j == m){
        max_sum = max(max_sum,total_sum);
    }
    if(i+1 <= n){
        solve(i+1,j,total_sum+v[i+1][j]);
    }
    if(j+1 <= m){
        solve(i,j+1,total_sum+v[i][j+1]);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> v[i][j];
            }
        }
        max_sum = -1e9 ;
        solve(1,1,v[1][1]);
        cout<<max_sum;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
