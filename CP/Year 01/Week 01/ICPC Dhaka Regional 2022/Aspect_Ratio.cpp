/*
    Author: Anas
    Date:   08-10-2024
    Time:   20:34:32
    File:   Aspect_Ratio.cpp
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
    ll a = 1;
    auto Anas = [&]()
    {
        double k;
        cin >> k;
        double ans = sqrt(((k * k) - 1) / (4 - (k * k)));
        cout << fixed << setprecision(4) << ans;
    };

    while (t--)
    {
        cout << "Case " << a << ": ";
        Anas();
        cout << "\n";
        a++;
    }

    return 0;
}
