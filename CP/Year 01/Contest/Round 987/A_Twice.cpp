/*
    Author: Anas
    Date:   17-11-2024
    Time:   20:36:22
    File:   A_Twice.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    cin >> test;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        ll cnt=0;

        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        sort(v.begin(),v.end());

        for (ll i = 0; i <n-1; i++)
        {
            if(v[i]==v[i+1])
            {
                cnt++;i++;
            }
        }
        

        cout << cnt << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
