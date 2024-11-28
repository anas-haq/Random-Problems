/*
    Author: Anas
    Date:   31-10-2024
    Time:   02:29:14
    File:   A_Add_and_Divide.cpp
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
        ll a, b;
        cin >> a >> b;

        if (a < b)
        {
            cout << "1\n";
            return;
        }

        ll mn = LLONG_MAX;

        ll newb = b == 1 ? b + 1 : b;
        ll f = b == 1 ? 1 : 0;

        for (ll i = 0; i < 30; i++){
            ll k = a;
            ll cnt = f + i;

            while (k > 0)
            {
                k /= newb + i;
                cnt++;
            }

            mn = min(mn, cnt);
        }

        cout << mn << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
