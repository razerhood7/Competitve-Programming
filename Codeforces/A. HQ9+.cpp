#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char a[101];
    cin>>a;
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
       

    }
            cout<<"NO";

    return 0;
}
