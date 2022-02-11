#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n,flag=0,count=0,sum=26;
    cin>>n;
    string a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a=="Cube")
        {
            count+=6;
        }
        else if(a=="Octahedron")
        {
            count+=8;
        }
        else if(a=="Tetrahedron")
        {
            count+= 4;
        }
        else if(a=="Dodecahedron")
        {
            count+=12 ;
        }
        else if(a=="Icosahedron")
        {
            count+= 20;
        }
    }
    cout<<count;
    return 0;
}
