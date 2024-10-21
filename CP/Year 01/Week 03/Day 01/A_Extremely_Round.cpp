/*
    Author: Anas
    Date:   21-10-2024
    Time:   12:58:41
    File:   A_Extremely_Round.cpp
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
        ll n;
        cin >> n;
        if (n > 9)
        {
            ll cnt = 1,x=9,y=10;
            for(ll i=10;i<=n;i+=y)
            {
                if(cnt==10)
                {
                    y*=10;
                    cnt=1;
                }
                cnt++;
                x++;
            }
            cout<<x<<"\n";
        }
        else
        {
            cout << n << "\n";
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
