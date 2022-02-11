#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,n,X=0;
    string a;
    cin>>n;
    for(i=0;i<n;i++)
        {
           cin>>a;
           if(a[1]=='+')
            X++;
           else 
            X--;
        }
    cout<<X;
    return 0;
}
 
