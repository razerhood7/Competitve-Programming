#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    int a1,b1;
    cin>>a;
    cin>>b;
    int flag = 1;
    while (flag)
    {
    
        a=a*3;
        b=b*2;
        count++;
        if(a>b)
        {
            cout<<count;
            flag = 0;
        }
    }

    return 0;
}
