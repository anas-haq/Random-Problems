/*
    Author: Anas
    Date:   29-01-2025
    Time:   20:19:06
    File:   The_Next_Permutation.cpp
*/
// #include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        string s; int n; cin >> n >> s;
        bool ok = next_permutation(s.begin(),s.end());
        if(ok){
            cout << n <<" "<< s <<"\n";
        }
        else{
            cout << n <<" "<<"BIGGEST\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
