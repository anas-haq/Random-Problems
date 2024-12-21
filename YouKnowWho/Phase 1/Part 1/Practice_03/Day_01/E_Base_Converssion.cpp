/*
    Author: Anas
    Date:   20-12-2024
    Time:   23:39:15
    File:   E_Base_Converssion.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void fun(int n){
    if(n == 0){
        return;
    } 
    fun((n>>1));
    if(n&1){
        // cout<<n<<" ";
        cout<<"1";
    }
    else{
        // cout<<n<<" ";
        cout<<"0";
    }   
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        fun(n);
        cout<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
