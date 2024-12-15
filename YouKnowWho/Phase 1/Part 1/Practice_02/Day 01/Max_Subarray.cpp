/*
    Author: Anas
    Date:   15-12-2024
    Time:   11:09:37
    File:   Max_Subarray.cpp
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
        int n;cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int mx=-1e9;
                for(int k=i;k<=j;k++){
                    mx=max(mx,v[k]);
                    // cout<<v[k]<<" ";
                }
                if(mx!=-1e9){
                    cout<<mx<<" ";
                }
            }
        }
        cout<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
