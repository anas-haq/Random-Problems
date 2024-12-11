/*
    Author: Anas
    Date:   11-12-2024
    Time:   14:14:53
    File:   Sum_of_Digits.cpp
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
        // cin >> n;
        string k;
        cin>>k;

        // n=stoll(k);

        ll cnt = 0;
        ll sum = 0;

        while (k.size()>1)
        {
            cnt++;
            string s =k;
            for (ll i = 0; i < s.size(); i++)
            {
                ll x = s[i] - '0';
                sum += x;
            }
            k = to_string(sum);
            sum = 0;
        }

        cout << cnt;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
