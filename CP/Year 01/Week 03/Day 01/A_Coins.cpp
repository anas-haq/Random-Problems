/*
    Author: Anas
    Date:   21-10-2024
    Time:   18:59:09
    File:   A_Coins.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0 || n%k==0)
        {
            cout << "YES\n";
            return;
        }
        if (k%2==0)
        {
            cout << "NO\n";
            return;
        }
        if(n>k)
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
