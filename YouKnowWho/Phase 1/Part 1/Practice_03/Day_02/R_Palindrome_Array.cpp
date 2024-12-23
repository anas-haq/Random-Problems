/*
    Author: Anas
    Date:   21-12-2024
    Time:   19:43:14
    File:   R_Palindrome_Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; 
const int N = 1e5+9;
vector<int>v(N);
void getPalindrome(int i, int j){
    if(i > j){
        cout << "YES";
        return;
    }
    if(v[i] != v[j]){
        cout<<"NO\n";
        return;
    }
    getPalindrome(i+1,j-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        getPalindrome(0,n-1);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
