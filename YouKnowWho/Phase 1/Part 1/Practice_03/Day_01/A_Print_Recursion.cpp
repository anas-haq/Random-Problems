/*
    Author: Anas
    Date:   20-12-2024
    Time:   23:06:30
    File:   A_Print_Recursion.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void fun(int n){
    if(n == 0){
        return;
    }
    cout<<"I love Recursion\n";
    fun(n-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        fun(n);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
