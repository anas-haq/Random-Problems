#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
        {
            bool ok=true;
            int g = t, j;
            for (j = i; j >0; j--)
            {
                if (s[j] == 'G' && s[j-1] =='B')
                {
                    ok=false;
                    swap(s[j], s[j-1]);
                    // cout<<s[j]<<" "<<s[j+1]<<"\n";
                    // j++;
                    // cout<<g<<"\n";
                    g--;
                    if(g==0)
                    {
                        break;
                    }
                }
                // else
                //     break;
            }
            // if(!ok)
            // {
            //     i++;
            // }
            // i = j;
            // cout<<s<<endl;
        }
    }
    cout << s << endl;
}
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t=1;cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}