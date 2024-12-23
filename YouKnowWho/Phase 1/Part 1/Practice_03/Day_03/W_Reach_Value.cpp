/*
    Author: Anas
    Date:   23-12-2024
    Time:   20:41:13
    File:   W_Reach_Value.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool ok;
void solve(ll x, ll need){
    if(x >= need){
        if(x== need){
            ok= false;
            return;
        }
        return;
    }
    solve(x*10,need);
    solve(x*20,need);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        ll n; cin >> n;
        ok = true;
        solve(1, n);
        if(ok){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
