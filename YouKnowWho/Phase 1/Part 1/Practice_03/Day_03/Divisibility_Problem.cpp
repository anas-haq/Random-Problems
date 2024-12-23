/*
    Author: Anas
    Date:   23-12-2024
    Time:   23:46:07
    File:   Divisibility_Problem.cpp
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
        int a, b; cin >> a>> b;
        if(a%b){
            ll k = a%b;
            int ans = b - k;
            cout << ans<<"\n";
            return;
        }
        cout << 0<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
