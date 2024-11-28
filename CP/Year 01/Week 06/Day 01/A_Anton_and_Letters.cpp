/*
    Author: Anas
    Date:   22-11-2024
    Time:   22:34:51
    File:   A_Anton_and_Letters.cpp
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
        set<char> st;
        char s;
        while (cin >> s)
        {
            if (s >= 'a' && s <= 'z')
            {
                st.insert(s);
            }
        }

        cout << st.size();
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
