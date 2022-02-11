#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
int main()
{
    
    int n,m;
    cin>>n>>m;
    int count=n;
    while(n>=m)
    {
        count+=(n/m);
        n=((n/m)+n%m);
    }
    
    cout<<count<<endl;
    return 0;
}
