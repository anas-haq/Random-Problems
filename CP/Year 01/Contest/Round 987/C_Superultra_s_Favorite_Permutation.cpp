/*
    Author: Anas
    Date:   17-11-2024
    Time:   21:12:47
    File:   C_Superultra_s_Favorite_Permutation.cpp
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
        if (n <= 4)
        {
            cout << -1 << endl;
            return;
        }
        for (ll i = 1; i <=n; i+=2)
        {
            if(i==1|| i==3 || i==5)
            {
                continue;
            }
            cout<<i<<" ";
        }
        cout<<"3 1 5 4 2 ";
        for (ll i = 2; i <=n; i+=2)
        {
            if(i==2|| i==4)
            {
                continue;
            }
            cout<<i<<" ";
        }
        
        cout << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
