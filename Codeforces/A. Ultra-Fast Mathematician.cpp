#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
   int i,j;
   string s,a;
   cin>>s;
   cin>>a;
   for(i=0;i<s.length();i++)
    {
        if(s[i]==a[i])
        {
            s[i]='0';
        }
        else
        {
            s[i]='1';
        }
    }
    cout<<s;
   return 0;

}
