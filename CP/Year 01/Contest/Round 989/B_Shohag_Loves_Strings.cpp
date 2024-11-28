/*
    Author: Anas
    Date:   24-11-2024
    Time:   18:40:40
    File:   B_Shohag_Loves_Strings.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        string s;
        cin>>s;
        ll n=s.size();
        for (ll i = 0; i <n-1; i++)
        {
            if(s[i]==s[i+1])            
            {
                cout<<s[i]<<s[i+1]<<"\n";
                return;
            }
        }
        for (ll i = 0; i <n-2; i++)
        {
            string k=s.substr(i,3);
            // cout<<k<<" ";
            set<char>st;
            st.insert(k[0]);
            st.insert(k[1]);
            st.insert(k[2]);
            if(st.size()==3)
            {
                cout<<k<<"\n";
                return;
            }
        }

        cout<<"-1\n";
        
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
