/*
    Author: Anas
    Date:   25-11-2024
    Time:   21:04:47
    File:   B_3_palindrome.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    // cin >> test;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;

        for(ll i=0;i<n;i++)
        {
            if(i%4==0)
            {
                cout<<"a";
            }
            if(i%4==1)
            {
                cout<<"a";
            }
            if(i%4==2)
            {
                cout<<"b";
            }
            if(i%4==3)
            {
                cout<<"b";
            }
        }

    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
