#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0,mount=0;
    char a[101];
    cin>>a;
    for(i=0;a[i]!='\0';i++)
        {
           if(a[i]>=97 && a[i]<=122) 
           {
               count++;
               //cout<<count;
           }
           else if(a[i]>=65 && a[i]<=96)
           {
               mount++;
           }
        }
    for(i=0;a[i]!='\0';i++)
    {
        if(count>=mount)
        {
            if(a[i]<=96 && a[i]>=65)
            {
                a[i]=a[i]+32;
            }
        }
        if(mount>count)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                a[i]=a[i]-32;
            }
        }
        
    }
    cout<<a;

    return 0;
}
