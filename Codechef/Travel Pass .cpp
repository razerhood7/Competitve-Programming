#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                count+=a;
            }
            else if(s[i]=='1')
            {
                count+=b;
            }
        }
        cout<<count<<endl;
     
    }

    return 0;
}
