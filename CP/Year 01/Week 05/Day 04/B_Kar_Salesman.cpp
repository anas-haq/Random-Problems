/*
    Author: Anas
    Date:   16-11-2024
    Time:   00:19:22
    File:   B_Kar_Salesman.cpp
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
        ll n,k;
        cin>>n>>k;
        ll sum=0,mx=0;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            mx=max(v[i],mx);
        }
        ll ans=sum/k;
        if(sum%k)
        {
            ans++;
        }
        ans=max(ans,mx);

        cout<<ans<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}












// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll test=1;
//     cin >> test;

//     auto Anas = [&]() {
//         ll n,k;
//         cin>>n>>k;
//         ll sum=0,mx=0;
//         vector<ll>v(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin>>v[i];
//             sum+=v[i];
//             mx=max(v[i],mx);
//         }
//         ll ans=sum/k;
//         if(sum%k)
//         {
//             ans++;
//         }
//         ans=max(ans,mx);

//         cout<<ans<<"\n";
        
//     };

//     while (test--) {
//         Anas();
//     }
    
//     return 0;
// }
