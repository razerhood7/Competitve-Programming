#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int i,flag=1;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!flag)
            {
                cout<<" ";
            }
            continue;
        }else
        {
            flag=0;
            cout<<s[i];
        }
    }
    return 0;
}
