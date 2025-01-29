/*
    Author: Anas
    Date:   28-01-2025
    Time:   20:17:08
    File:   A_Summatory.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 3;
const int N = 1e6+9;

ll formula(ll x){
    ll ans = x*(x+1)/2;
    ans%=mod;
    ans*=ans;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    vector<ll>pref(N);
    pref[0] = 0;
    for(int i = 1; i <= N; i++){
        pref[i] = (pref[i-1]+formula(i))%mod;
    }
    
    auto Anas = [&]() {
        int n; cin >> n;
        cout << pref[n] <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
