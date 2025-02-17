/*
    Author: Anas
    Date:   12-02-2025
    Time:   00:45:15
    File:   ACboy_needs_your_help_again.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        string s; cin >> s;
        if(s != "FIFO"){
            stack<int>st;
            while(n--){
                string first; cin >> first;
                if(first == "IN"){
                    int x; cin >> x;
                    st.push(x);
                }
                else{
                    if(st.size() > 0){
                        cout << st.top()<<"\n";
                        st.pop();
                    }
                    else{
                        cout <<"None\n";
                    }
                }
            }
        }
        else{
            queue<int>st;
            while(n--){
                string first; cin >> first;
                if(first == "IN"){
                    int x; cin >> x;
                    st.push(x);
                }
                else{
                    if(st.size() > 0){
                        cout << st.front()<<"\n";
                        st.pop();
                    }
                    else{
                        cout <<"None\n";
                    }
                }
            }
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
