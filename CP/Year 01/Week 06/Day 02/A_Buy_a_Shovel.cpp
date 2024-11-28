/*
    Author: Anas
    Date:   27-11-2024
    Time:   16:53:55
    File:   A_Buy_a_Shovel.cpp
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
        ll n, k;
        cin >> n >> k;
        ll cnt = 1, ans = n;
        while (true)
        {
            ans %= 10;
            if (ans == 0 || ans == k)
            {
                cout << cnt << "\n";
                return;
            }
            ans += n;
            cnt++;
        }
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
