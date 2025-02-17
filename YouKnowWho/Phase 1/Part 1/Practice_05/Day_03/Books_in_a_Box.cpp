/*
    Author: Anas
    Date:   15-02-2025
    Time:   20:30:20
    File:   Books_in_a_Box.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;
    stack<int>st;
    auto Anas = [&]() {
        int x; cin >> x;
        if(x == 1){
            int val; cin >> val;
            st.push(val);
        }
        if(x == 2){
            if(!st.empty()){
                st.pop();
            }
        }
        if(x == 3){
            if(!st.empty()){
                cout << st.top()<<"\n";
            }
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
