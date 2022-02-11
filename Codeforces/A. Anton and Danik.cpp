#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,i,count=0,mount=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
           
           if(s[i]=='A')
           {
               count++;
           }
           if(s[i]=='D')
           {
               mount++;
           }
    }
    if(count>mount){
        cout<<"Anton";
    }
    else if(count<mount)
    {
        cout<<"Danik";
    }
    else if(count==mount)
    {
        cout<<"Friendship";
    }
    return 0;
}
