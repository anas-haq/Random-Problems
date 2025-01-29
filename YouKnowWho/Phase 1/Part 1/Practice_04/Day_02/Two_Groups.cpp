/*
    Author: Anas
    Date:   28-01-2025
    Time:   19:06:48
    File:   Two_Groups.cpp
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
        vector<int>v(n);
        ll sum_pos = 0, sum_neg = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] < 0){
                sum_neg += (-1)*v[i];
            }
            else{
                sum_pos += v[i];
            }
        }
        ll ans = abs(sum_neg - sum_pos);
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
