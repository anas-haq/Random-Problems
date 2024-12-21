/*
    Author: Anas
    Date:   20-12-2024
    Time:   23:11:45
    File:   B_Print_from_1_to_N.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void fun(int n){
    if(n == 0){
        return;
    }
    fun(n-1);
    cout<<n<<"\n";
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
