/*
    Author: Anas
    Date:   11-02-2025
    Time:   23:18:15
    File:   Epic_Transformation.cpp
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
        vector<int>v(n);
        int mx = -1e9;
        map<int,int>mp;
        for(auto &x :v){
            cin >> x;
            mp[x]++;
            mx = max(mx,mp[x]);
        }
        if(mx > (n/2)){
            int rem = n - mx;
            rem *= 2;
            cout << (n-rem) <<"\n";
            return;
        }
        cout << (n&1) <<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
