/*
    Author: Anas
    Date:   16-12-2024
    Time:   13:25:07
    File:   Hard_Square.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            if(i == 0 or i == n-1){
                for(int j = 0; j < n; j++){
                    cout<<"* ";
                }
                cout<<"\n";
            }
            else{
                cout<<"* ";
                for(int j = 1; j < n-1; j++){
                    cout<<"  ";
                }
                cout<<"* ";
                cout<<"\n";
            }            
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
