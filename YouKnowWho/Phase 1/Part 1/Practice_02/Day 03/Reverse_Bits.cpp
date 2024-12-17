/*
    Author: Anas
    Date:   17-12-2024
    Time:   13:10:00
    File:   Reverse_Bits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    cin >> test;

    auto Anas = [&]() {
        unsigned int n; cin >> n;
        unsigned int ans = 0;
        vector<int>v(32);
        for (int i = 0; i <= 31; i++){
            if((n>>i)&1){
                v[i] = 0;
            }
            else{
                v[i] = 1;
            }
        }
        reverse(v.begin(),v.end());
        for (int i = 0; i < 32; i++){
            if(v[i] == 1){
            }
            else{
                ans+=(1u<<i);
            }
        }
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
