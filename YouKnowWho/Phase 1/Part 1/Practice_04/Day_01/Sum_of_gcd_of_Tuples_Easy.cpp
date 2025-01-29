/*
    Author: Anas
    Date:   27-01-2025
    Time:   21:49:40
    File:   Sum_of_gcd_of_Tuples_Easy.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                for(int k = 1; k <= n; k++){
                    int a = __gcd(i,j);
                    int b = __gcd(a,k);
                    sum+=b;
                }
            }
        }
        cout << sum;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
