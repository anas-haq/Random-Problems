/*
    Author: Anas
    Date:   18-11-2024
    Time:   16:47:47
    File:   J_Waiting_for.cpp
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
    ll sum = 1;
    auto Anas = [&]()
    {
        char c;
        ll n;
        cin >> c >> n;

        if (c == 'P')
        {
            // cout<<"x";
            sum += n;
            // cout<<sum<<"\n";
        }
        else if (c == 'B')
        {
            // cout << sum << " " << n << "\n";
            if (sum <= n)
            {
                cout << "YES\n";
                sum -= n;
                cout<<sum<<"\n";
            }
            else
            {
                cout << "NO\n";
                sum -= n;
            }
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
