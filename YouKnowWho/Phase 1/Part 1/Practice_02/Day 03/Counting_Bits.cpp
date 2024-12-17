/*
    Author: Anas
    Date:   17-12-2024
    Time:   11:44:17
    File:   Counting_Bits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int number_of_setbit(int x){
    int ans = 0;
    for (int i = 0; i < 31; i++){
        if((x>>i)&1){
            ans++;
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    cin >> test;

    auto Anas = [&]() {
        
        int n; cin >> n;
        int ans = 0;
        
        for (int i = 1; i <= n; i++) {
        // ans += count_set_bits(i); // O(log(n))
            ans += __builtin_popcount(i); // O(1)
        }

        cout << ans << '\n';
  
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
