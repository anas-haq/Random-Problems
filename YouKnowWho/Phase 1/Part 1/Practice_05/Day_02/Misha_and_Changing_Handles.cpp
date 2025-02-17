/*
    Author: Anas
    Date:   13-02-2025
    Time:   19:33:58
    File:   Misha_and_Changing_Handles.cpp
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
        map<string, string> owner;
        while (q--) {
          string old_username, new_username;
          cin >> old_username >> new_username;
      
          if (owner.find(old_username) == owner.end()) {
            owner[new_username] = old_username;
          }
          else {
            owner[new_username] = owner[old_username];
            owner.erase(old_username);
          }
        }
        cout << owner.size() << '\n';
        for (auto [username, owner_name]: owner) {
          cout << owner_name << ' ' << username << '\n';
        }        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
