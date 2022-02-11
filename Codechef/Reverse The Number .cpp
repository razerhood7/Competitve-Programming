#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int num,i;
            cin>>num;
            int rev_num = 0;
            while (num > 0) 
            {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
            }
        cout<< rev_num<<endl;
    }

    return 0;
}
