/*
    Author: Anas
    Date:   22-11-2024
    Time:   19:36:04
    File:   B_Queue_at_the_School.cpp
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
        ll n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        for (ll j = 0; j < x; j++)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                if (s[i] == 'B' && s[i + 1] == 'G')
                {
                    s[i] = 'G';
                    s[i + 1] = 'B';
                    i++;
                }
            }
        }
        cout << s;
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
