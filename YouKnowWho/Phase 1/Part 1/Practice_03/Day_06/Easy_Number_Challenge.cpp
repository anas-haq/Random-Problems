/*
    Author: Anas
    Date:   12-01-2025
    Time:   19:51:31
    File:   Easy_Number_Challenge.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1<<30;
const int N = 1e6+9;
vector<int>v(N);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j+=i ){
            v[j]++;
        }
    }
    auto Anas = [&]() {
        int a, b, c; cin >> a >> b >> c;
        ll cnt = 0;
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= b; j++){
                for(int k = 1; k <= c; k++){
                    ll val = i*j*k*1LL;
                    cnt+=v[val];
                }
            }
        }

        cout << cnt;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
