#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int i,j,count=0;
    string s;
    cin>>s;
    int n=s.length();
    string t;
    cin>>t;
    int w=t.length();
    //temp=t;
    for(i=0,j=w-1;i<n;i++,j--)
    {
        if(s[i]==t[j])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"YES";
    }
    else
     cout<<"NO";

    return 0;
}
