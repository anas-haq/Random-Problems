/*
    Author: Anas
    Date:   19-10-2024
    Time:   20:20:07
    File:   B_Minimise_Oneness.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc = 1;
    cin >> tc;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        string s1;
        s1.push_back('0');
        s1.push_back('1');
        for (ll i = 2; i < n; i++)
        {
            s1.push_back('0');
        }
        // cout << s1 << "\n";
        for(ll i=0;i<n;i++)
        {
            cout<<s1[i];
        }
        cout<<"\n";
    };

    while (tc--)
    {
        Anas();
    }

    return 0;
}
