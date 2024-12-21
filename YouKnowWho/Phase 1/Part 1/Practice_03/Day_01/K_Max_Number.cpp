/*
    Author: Anas
    Date:   21-12-2024
    Time:   00:23:08
    File:   K_Max_Number.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e3+5;
vector<int>v(N);
void fun(int n){

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        fun(n);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
