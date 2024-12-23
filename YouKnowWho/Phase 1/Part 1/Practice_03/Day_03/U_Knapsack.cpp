/*
    Author: Anas
    Date:   23-12-2024
    Time:   19:27:28
    File:   U_Knapsack.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 22;

vector<int>a(N),b(N);
int mx_val, n, sum;

void solve(int item, int weight, int max_weight){
    if(item > n){
        if(weight <= sum){
            mx_val=max(mx_val,max_weight);
        }
        return;
    }

    solve(item+1, weight, max_weight);
    solve(item+1, (weight+a[item]), (max_weight+b[item]));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n >> sum;
        mx_val = 0;
        for(int i = 1; i<= n; i++){
            cin >> a[i] >> b[i];
        }
        solve(1,0,0);
        cout << mx_val;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
