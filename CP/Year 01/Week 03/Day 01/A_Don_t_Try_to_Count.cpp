/*
    Author: Anas
    Date:   22-10-2024
    Time:   01:06:30
    File:   A_Don_t_Try_to_Count.cpp
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
        int n, m, cnt = 0;
        string s, x;
        cin >> n >> m >> s >> x;
        string temp = s;
        int flag = 10, blag = 0;
        while (flag--)
        {
            bool isFound = s.find(x) != string::npos;
            if (isFound)
            {
                cout << cnt << '\n';
                blag = 1;
                return;
            }
            else
            {
                s += s;
                cnt++;
            }
        }
        if (!blag)
            cout << "-1" << '\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
