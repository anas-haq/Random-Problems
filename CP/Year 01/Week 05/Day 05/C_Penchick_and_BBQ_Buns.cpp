/*
    Author: Anas
    Date:   17-11-2024
    Time:   01:20:27
    File:   C_Penchick_and_BBQ_Buns.cpp
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
        if (n & 1)
        {
            if (n <= 25)
            {
                cout << "-1\n";
            }
            else
            {
                cout << "1 2 2 3 3 4 4 5 5 1 ";
                cout << "6 6 7 7 8 8 9 9 10 10 ";
                cout << "11 11 12 13 13 1 12 ";
                ll x = 14;
                for (ll i = 28; i < n; i += 2)
                {
                    cout << x << " " << x << " ";
                    x++;
                }
                cout<<"\n";
            }
            return;
        }
        ll x=1;
        for (ll i = 0; i <n; i+=2)
        {
            cout<<x<<" "<<x<<" ";
            x++;
        }
        cout<<"\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
