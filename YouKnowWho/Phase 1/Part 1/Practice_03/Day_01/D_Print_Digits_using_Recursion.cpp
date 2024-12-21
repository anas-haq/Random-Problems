/*
    Author: Anas
    Date:   20-12-2024
    Time:   23:24:24
    File:   D_Print_Digits_using_Recursion.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void fun(ll n){
    if( n == 0){
        return ;
    }
    ll val = n%10;
    fun(n/10);   
    cout<< val <<" ";   
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        ll n; cin >> n;
        if(n == 0){
            cout<<"0\n";
            return;
        }
        fun(n);
        cout<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
