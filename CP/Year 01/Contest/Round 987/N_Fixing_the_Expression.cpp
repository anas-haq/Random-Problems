/*
    Author: Anas
    Date:   18-11-2024
    Time:   17:33:31
    File:   N_Fixing_the_Expression.cpp
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
        char c;
        cin >> a >> c >> b;
        if(a>b)
        {
            cout<<a<<'>'<<b<<'\n';
        }
        else if(a<b)
        {
            cout<<a<<"<"<<b<<'\n';
        }
        else
        {
            cout<<a<<"="<<b<<"\n";
        }
        
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
