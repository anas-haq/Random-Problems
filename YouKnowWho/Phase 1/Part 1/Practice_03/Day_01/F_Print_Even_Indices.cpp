/*
    Author: Anas
    Date:   20-12-2024
    Time:   23:49:25
    File:   F_Print_Even_Indices.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int n = 1e3+5;
vector<int>v(n);
void fun(int x){
    if(x == 0){
        cout<<v[0];
        return;
    }
    cout<<v[x]<<" ";
    fun(x-2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int m;
        cin >> m;
        for(int i = 0; i < m; i++){
            cin >> v[i];
        }
        if(m & 1){
            fun(m-1);
        }
        else{
            fun(m-2);
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
