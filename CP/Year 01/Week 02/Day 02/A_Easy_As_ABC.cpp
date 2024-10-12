#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    /*
        Author: FRK
        Date:   12-10-2024
        Time:   23:43:52
        File:   A_Easy_As_ABC.cpp
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n=3;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }

    vector<string> v;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string ss,s1;
            if(j-1>=0 && i-1>=0)s1.push_back(a[i-1][j-1]);
            if(j-1>=0)s1.push_back(a[i][j-1]);
            if(j-1>=0 && i+1<n)s1.push_back(a[i+1][j-1]);


            if(j+1<n && i+1<n)s1.push_back(a[i+1][j+1]);
            if(j+1<n && i-1>=0)s1.push_back(a[i-1][j+1]);
            if(j+1<n)s1.push_back(a[i][j+1]);

            if(i-1>=0)s1.push_back(a[i-1][j]);
            if(i+1<n)s1.push_back(a[i+1][j]);

            sort(s1.begin(),s1.end());
            
            ss.push_back(s1[0]);
            ss.push_back(a[i][j]);
            ss.push_back(s1[1]);
            
            v.push_back(ss);
           
        }
    }


       
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    return 0;
}