/*
    Author: Anas
    Date:   29-01-2025
    Time:   01:09:15
    File:   Even_Pair_Sum.cpp
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
        int a, b; cin >> a >> b;
        if(b < a){
            swap(a,b);
        }
        int odd_a = (a+1)/2, odd_b = (b+1)/2;
        int even_a = (a)/2, even_b = (b)/2;
        ll ans = odd_a * odd_b;
        ans+= even_a*even_b;
        cout << ans <<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
