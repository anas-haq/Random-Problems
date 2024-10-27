/*
    Author: Anas
    Date:   27-10-2024
    Time:   20:49:08
    File:   A_Sliding.cpp
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
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        ll x=abs(r-n);
        ll ans = (m * x) + ((m-1) * x) + abs(c - m);
        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
