/*
    Author: Anas
    Date:   10-02-2025
    Time:   13:02:44
    File:   Sets_STL.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int q; cin >> q;
        set<int>s;
        while (q--)
        {
            int val, x; cin >> val >> x;
            if(val == 1){
                s.insert(x);
            }
            if(val == 2){
                s.erase(x);
            }
            if(val == 3){
                if(s.find(x)!=s.end()){
                    cout <<"Yes\n";
                }
                else{
                    cout <<"No\n";
                }
            }
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
