/*
    Author: Anas
    Date:   09-01-2025
    Time:   20:03:25
    File:   Sum_of_Product_1.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x: v) cin >> x;
        ll cnt = 0, one = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 1){
                one++;
            }
            else{
                one = 0;
            }
            cnt += one;
        }
        cout << cnt <<'\n';
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
