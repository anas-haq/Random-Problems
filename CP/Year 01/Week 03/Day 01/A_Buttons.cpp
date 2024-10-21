/*
    Author: Anas
    Date:   21-10-2024
    Time:   23:09:52
    File:   A_Buttons.cpp
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
        ll a, b, c;
        cin >> a >> b >> c;
        
        if(a>b)
        {
            cout<<"First\n";
        }
        else if(b>a)
        {
            cout<<"Second\n";
            // return;
        }
        else
        {
            if(c&1)
            {
                cout<<"First\n";
            }
            else
            {
                cout<<"Second\n";
            }
            
        }
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
