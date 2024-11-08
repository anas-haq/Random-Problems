/*
    Author: Anas
    Date:   08-10-2024
    Time:   22:49:01
    File:   Point_Table.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    ll a=1;
    auto Anas = [&]() {
        vector<tuple<ll,ll,ll>>v={{6,3,0},{6,1,1},{3,3,3},{2,2,2},{4,4,0},{2,4,1},{4,3,1}};
        ll a,b,c;
        cin>>a>>b>>c;
        for(auto [x,y,z]:v)
        {
             if ((x == a && y == b && z == c) || 
                (x == a && y == c && z == b) || 
                (x == b && y == a && z == c) || 
                (x == b && y == c && z == a) || 
                (x == c && y == a && z == b) || 
                (x == c && y == b && z == a)) 
            {
                cout<<"perfectus\n";
                return;
            }
            
        }
        cout<<"invalidum\n";
    };

    while (t--) {
        cout<<"Case "<<a<<": ";
        Anas();
        a++;
    }
    
    return 0;
}
