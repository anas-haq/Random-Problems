/*
    Author: Anas
    Date:   12-11-2024
    Time:   11:36:14
    File:   A_Red_Versus_Blue.cpp
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
        ll n,r,b;
        cin>>n>>r>>b;

        string s="";
        ll a=r/(b+1);
        ll mod=r%(b+1);
        ll k=b;
        for (ll i = 0; i <(b+1); i++)
        {
            s+=string(a,'R');
            if(mod>0)
            {
                s+='R';
                mod--;
            }
            if(k>0)
            {
                s+='B';
                k--;
            }
        }
        cout<<s<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
