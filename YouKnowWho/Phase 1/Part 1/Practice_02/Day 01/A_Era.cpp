/*
    Author: Anas
    Date:   14-12-2024
    Time:   23:07:37
    File:   A_Era.cpp
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
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll sum=0,j=1;

        for(int i=0;i<n;i++){
            if(v[i]>j){
                sum+=(v[i]-j);
                j+=(v[i]-j);
            }
            j++;
        }

        cout<<sum<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
