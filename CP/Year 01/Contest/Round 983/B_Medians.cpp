/*
    Author: Anas
    Date:   01-11-2024
    Time:   21:15:19
    File:   B_Medians.cpp
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
        ll n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << 1 << "\n";
            cout << 1 << "\n";
            return;
        }
        if (k == 1 || k == n)
        {
            cout << "-1\n";
            return;
        }
        cout << 3 << "\n";
        if (k & 1)
        {
            cout << 1 << " " << k - 1 << " " << k + 2;
        }
        else
        {
            cout << 1 << " " << k << " " << k + 1;
        }

        cout << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
