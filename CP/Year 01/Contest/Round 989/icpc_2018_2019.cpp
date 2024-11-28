/*
    Author: Anas
    Date:   25-11-2024
    Time:   18:33:52
    File:   icpc_2018_2019.cpp
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
        double n;cin>>n;
        double sum=n*(0.15);
        // cout<<sum<<"\n";
        double ans=sum+n;
        cout<<fixed<<setprecision(2)<<ans<<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
