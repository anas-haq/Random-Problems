/*
    Author: Anas
    Date:   21-12-2024
    Time:   19:12:03
    File:   I_Count_Vowels.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
char ar[205];
int len;
bool isvowel(char ch){
    ch = tolower(ch);
    if(ch =='a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'){
        return true;
    }
    else{
        return false;
    }    
}
int GetVowelSum(int i){
    if(i == len){
        return 0;
    }
    int cnt = isvowel(ar[i]);
    cnt+=GetVowelSum(i+1);
    return cnt;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin.getline(ar,205);
        len = strlen(ar);
        int ans = GetVowelSum(0);
        cout<< ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
