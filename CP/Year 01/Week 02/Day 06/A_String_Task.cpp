/*
    Author: Anas
    Date:   18-10-2024
    Time:   23:29:11
    File:   A_String_Task.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        string s1,s;
        cin>>s1;
        // char a='A';
        // cout<<'a'-'A';  //32 plus
        // "A", "O", "Y", "E", "U", "I"
        ll n=s1.size();
        s.push_back('.');
        for (ll i = 0; i <n; i++)
        {
            if(s1[i]=='i'||s1[i]=='I'||s1[i]=='A'||s1[i]=='a'||s1[i]=='O'||s1[i]=='o'||s1[i]=='y'||s1[i]=='Y'||s1[i]=='e'||s1[i]=='E'||s1[i]=='u'||s1[i]=='U')
            {
                continue;
            }
            else
            {
                s.push_back(s1[i]);
                s.push_back('.');
            }            
        }
        s.pop_back();

        ll m=s.size();
        for(ll i=0;i<m;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        for(auto i:s)cout<<i;
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
