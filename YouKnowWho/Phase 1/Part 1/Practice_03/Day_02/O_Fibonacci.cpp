/*
    Author: Anas
    Date:   21-12-2024
    Time:   17:29:47
    File:   O_Fibonacci.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int GetFibo(int x){
    if(x == 1){
        return 0;
    }
    if(x == 2){
        return 1;
    }
    return GetFibo(x-1) + GetFibo(x-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n;
        cin >> n;
        cout<<GetFibo(n);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
