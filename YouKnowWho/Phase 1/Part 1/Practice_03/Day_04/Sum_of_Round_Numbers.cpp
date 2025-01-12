/*
    Author: Anas
    Date:   24-12-2024
    Time:   17:52:31
    File:   Sum_of_Round_Numbers.cpp
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
        string s = to_string(n);
        vector<string>v;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='0'){
                continue;
            }
            string k="";
            for(int j =i; j <s.size(); j++){
                if(j == i){
                    k+=s[j];
                }else{
                    k+='0';
                }
            }
            v.push_back(k);
        }
        cout<<v.size()<<"\n";
        for(auto i:v) cout <<i <<" ";
        cout<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
