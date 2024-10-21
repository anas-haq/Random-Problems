/*
    Author: Anas
    Date:   21-10-2024
    Time:   21:51:36
    File:   A_Grasshopper_on_a_Line.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll c,k;
        cin>>c>>k;
        if(c%k==0)
        {
            // if(k==1)
            // {
            //     cout<<
            // }
            cout<<2<<"\n";
            cout<<c-1<<" "<<1<<"\n";
        }
        else
        {
            cout<<"1"<<'\n';
            cout<<c<<"\n";
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
