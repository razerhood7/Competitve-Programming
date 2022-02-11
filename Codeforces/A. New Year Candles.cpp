#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a,b,divi,mod;
    cin>>a>>b;
    int count=a;
    while(a>=b)
    {
    divi=a/b;
    count+=divi;
    mod=a%b;
    a=divi+mod;
    
    
    }
    
    cout<<count;
    return 0;
}
