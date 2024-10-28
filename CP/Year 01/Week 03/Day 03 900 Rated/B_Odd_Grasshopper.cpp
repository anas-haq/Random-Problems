/*
    Author: Anas
    Date:   25-10-2024
    Time:   18:13:35
    File:   B_Odd_Grasshopper.cpp
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
        ll x, n;
        cin >> x >> n;

        ll d = 0;
        if (n % 4 == 1) d = -n;
        else if (n % 4 == 2) d = 1;
        else if (n % 4 == 3) d = n + 1;
        else d = 0;

        if (x % 2 == 0)
            cout << x + d << "\n";
        else
            cout << x - d << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
