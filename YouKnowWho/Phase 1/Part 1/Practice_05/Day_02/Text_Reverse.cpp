/*
    Author: Anas
    Date:   11-02-2025
    Time:   23:29:54
    File:   Text_Reverse.cpp
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
        cin.ignore();
        while(q--){
            string s;
            getline(cin,s);
            int n = s.size();
            string word = "";
            for(int i = 0; i < n; i++){
                if(s[i] == ' '){
                    reverse(word.begin(),word.end());
                    cout << word <<" ";
                    word="";
                }
                else{
                    word+=s[i];
                }
            }
            reverse(word.begin(),word.end());
            cout << word <<" ";
            cout <<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
