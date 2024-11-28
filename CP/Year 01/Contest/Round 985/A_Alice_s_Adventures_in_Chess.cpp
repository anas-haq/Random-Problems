/*
    Author: Anas
    Date:   13-11-2024
    Time:   17:47:17
    File:   A_Alice_s_Adventures_in_Chess.cpp
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
        ll n, a, b;
        cin >> n >> a >> b;
        ll x = 0, y = 0;
        string s,k;
        cin >> s;
        k=s;
        for(ll i=0;i<(10*10);i++)
        {
            s+=k;
        }
        n*=(10*10);
        for (ll i = 0; i < (n); i++)
        {
            if(x==a && y==b)
            {
                cout<<"YES\n";
                return;
            }
            if (s[i] == 'N')
            {
                y++;
            }
            if (s[i] == 'E')
            {
                x++;
            }
            if (s[i] == 'S')
            {
                y--;
            }
            if (s[i] == 'W')
            {
                x--;
            }
            
            
        }
        // if(a%x==0 && b%y==0 && x!=0 && y!=0)
        // {
        //     cout<<"YES\n";
        // }
        // else
        // {
            cout<<"NO\n";
        // }
        
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
