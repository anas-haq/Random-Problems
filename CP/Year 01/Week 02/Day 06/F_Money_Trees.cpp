/*
    Author: Anas
    Date:   18-10-2024
    Time:   11:29:33
    File:   F_Money_Trees.cpp
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        ll l = 0, r = 0, ans = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];

            if (r + 1 < n && sum <= k && b[r] % b[r + 1] == 0)
            {
                ans = max(ans, r - l + 1);
                r++;
            }
            else
            {
                if (((r + 1) < n) && ((b[r] % b[r + 1]) != 0))
                {
                    if (sum <= k)
                    {
                        ans = max(ans, (r - l) + 1);
                    }
                    l = r + 1;
                    r = l;
                    sum = 0;
                }
                else
                {
                    if (sum <= k)
                    {
                        ans = max(ans, (r - l) + 1);
                    }
                    sum -= a[l];
                    l++;
                    r++;
                }
            }
        }
        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
