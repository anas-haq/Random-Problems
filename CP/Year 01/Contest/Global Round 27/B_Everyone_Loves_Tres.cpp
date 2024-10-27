/*
    Author: Anas
    Date:   27-10-2024
    Time:   21:02:33
    File:   B_Everyone_Loves_Tres.cpp
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
        ll n;
        cin >> n;
        if (n == 1 || n == 3)
        {
            cout << "-1\n";
            return;
        }
        if(n==2)
        {
            cout<<"66"<<"\n";
            return;
        }
        if (n & 1)
        {
            ll k = n - 5;
            string s1 = "36366";
            reverse(s1.begin(), s1.end());
            for (ll i = 0; i < k; i++)
            {
                s1.push_back('33');
                // s1.push_back('3');
            }
            reverse(s1.begin(), s1.end());
            cout << s1 << "\n";
            return;
        }
        ll k = n - 4;
        string s = "", s1 = "3366";
        reverse(s1.begin(), s1.end());
        for (ll i = 0; i < k; i++)
        {
            s1.push_back('33');
            // s1.push_back('3');
        }
        reverse(s1.begin(), s1.end());
        cout << s1 << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
