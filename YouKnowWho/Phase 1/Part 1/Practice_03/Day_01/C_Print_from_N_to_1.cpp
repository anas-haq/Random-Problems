/*
    Author: Anas
    Date:   20-12-2024
    Time:   23:13:17
    File:   C_Print_from_N_to_1.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void fun(int n, int k){
    if(k > n){
        return;
    }
    fun(n, k+1);
    if(k == 1){
        cout<<k;
    }
    else{
        cout<<k <<" ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        fun(n,1);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
