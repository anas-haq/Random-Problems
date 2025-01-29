/*
    Author: Anas
    Date:   27-01-2025
    Time:   19:20:33
    File:   Enormous_Input_Test.cpp
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
        int n, k; cin >> n >> k;
        int cnt = 0;
        while (n--){
            int x; cin >> x;
            if(x%k == 0){
                cnt++;
            }
        }
        cout << cnt;
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
