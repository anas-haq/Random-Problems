/*
    Author: Anas
    Date:   17-12-2024
    Time:   12:26:09
    File:   Swap_Bits.cpp
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
        for (int i = 0; i <= 31; i+=2){
            int a = (n>>i)&1;
            int b = (n>>(i+1))&1;
            swap(a,b);
            if(a){
                ans+=(1<<i);
            }
            if(b){
                ans+=(1<<(i+1));
            }
        }

        cout<< ans <<"\n";
        

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
