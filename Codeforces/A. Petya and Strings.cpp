#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
    void upper(char s[100])
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>=97)
            s[i]=s[i]-32;
        }
    }
    
    int main()
    {
        char s[100],a[100];
        cin>>s;
        cin>>a;
        upper(s);
        upper(a);
        int z=strcmp(s,a);
        cout<<z;
        return 0;
    }
