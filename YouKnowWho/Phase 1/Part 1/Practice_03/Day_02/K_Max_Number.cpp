/*
    Author: Anas
    Date:   21-12-2024
    Time:   16:52:11
    File:   K_Max_Number.cpp
*/
#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9;
using ll = long long;
int n;
vector<int>v(1009);
int getMax(int i){
    if(i == n){
        return -inf;
    }
    int Val = getMax(i+1);
    Val = max(Val,v[i]);
    return Val ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int val = getMax(0);
        cout << val;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
