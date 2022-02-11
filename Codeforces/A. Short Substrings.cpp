#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t,i,j=0;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        int n=b.size();
        string a;
        for(i=0;i<n-1;i++)
        {
            if(i==0)
               {
                   a+=b[i];
               } 
            if(b[i]==b[i-1])
            {
                a+=b[i];
                i++;
            }
        }
        a+=b[n-1];
        cout<<a<<endl;
    }

    return 0;
}
