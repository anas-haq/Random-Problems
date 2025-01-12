/*
    Author: Anas
    Date:   09-01-2025
    Time:   19:23:38
    File:   Non_Negative_Product.cpp
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
        bool ok = false;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x < 0){
                cnt++;
            }
            if(x == 0){
                ok = true;
            }
        }
        if((cnt & 1) and !ok){
            cout << 1 <<"\n";
            return;
        }
        cout << 0 <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
