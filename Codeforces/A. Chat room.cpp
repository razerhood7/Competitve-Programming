#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j=0,count=0;
    string b="hello";
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==b[j])
        {
            j++;
            count++;
            
            if(count==5)
            {
                break;
            }
        }
    }
    
    if(count==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
