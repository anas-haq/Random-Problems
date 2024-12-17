/*
    Author: Anas
    Date:   17-12-2024
    Time:   19:19:16
    File:   following_code_output.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n = 3;
        int sum = 0;
        for (int mask = 0; mask < (1<<n); mask++){
            for(int i = 0; i < n; i++){
                if(mask & (1<<i)){
                    sum+=i;
                    // cout<<mask <<" "<<i<<"\n";
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
