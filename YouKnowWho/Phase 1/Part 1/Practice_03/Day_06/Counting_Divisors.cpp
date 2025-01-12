/*
    Author: Anas
    Date:   09-01-2025
    Time:   19:54:01
    File:   Counting_Divisors.cpp
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
        int cnt = 0;
        for(int i = 1; i*i <= n; i++){
            if(n%i == 0){
                if(n/i == i){
                    // cout << n/i <<" ";
                    cnt++;
                    continue;
                }
                // cout << n/i <<" ";
                cnt+=2;
            }
        }
        cout << cnt <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
