/*
    Author: Anas
    Date:   22-12-2024
    Time:   18:45:01
    File:   T_Combination.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll fact(int n){
    if( n == 1){
        return 1;
    }
    ll ans = fact ((n-1));
    ans*= n;
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int a, b; cin >> a >> b;
        // ll ans = fact(5);
        ll first_val;
        if( a == 0){
            first_val = 1;
        }else{
            first_val = fact(a);
        }
        int val = a-b;
        ll second_val ;
        if(val == 0){
            second_val = 1;
        }
        else{
            second_val = fact((a-b));
        }        
        ll third_val;
        if(b == 0){
            third_val = 1;
        }else{
            third_val = fact(b);
        }
        // cout << third_val<<" ";
        ll forth_val = second_val * third_val;
        ll ans = (first_val / forth_val);
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
