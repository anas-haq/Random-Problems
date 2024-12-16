/*
    Author: Anas
    Date:   16-12-2024
    Time:   11:13:23
    File:   Frequency_Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n, val; cin >> n >> val;

        map<int,int>mp;
        vector<int> v, frq(N, 0);

        for (int i = 1; i <= n; i++){
            int x; cin >> x;
            v.push_back(x);
            mp[x]++;
            frq[x]++;
        }
        // for (auto i:v)cout << i << " ";
        
        for( int i = 1; i <=val; i++){
            cout<<frq[i]<<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}


