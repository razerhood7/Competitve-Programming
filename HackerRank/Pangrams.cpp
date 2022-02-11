#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,flag=0,count=0,result;

    set<char> n;
    string s;
    getline(cin, s);
    for(i=0;i<s.size();i++)
    {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            n.insert(s[i]);
    } 
    result=n.size();
    if(result-1==26)
    {
        cout<<"pangram";
    }
    else
    {
        cout<<"not pangram";
    }

    //return 0;
}
