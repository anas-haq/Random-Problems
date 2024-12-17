/*
    Author: Anas
    Date:   17-12-2024
    Time:   17:53:22
    File:   Little_Elephant_and_Bits.cpp
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
        string s; cin >> s;
        int first_zero = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                first_zero = i;
                break;
            }
        }
        if(first_zero == -1){
            s.pop_back();
            cout<<s;
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(i == first_zero){
                    continue;
                }
                cout<<s[i];
            }
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
