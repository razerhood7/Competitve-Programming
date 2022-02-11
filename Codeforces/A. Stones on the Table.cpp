#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,n,temp,count=0;
    char word[51];
    cin>>n;
    cin>>word;
    temp=word[0];
    for(i=1;word[i]!='\0';i++)
    {
        if(word[i]==temp)
        {
            temp=word[i];
            count++;
        }
        else if(word[i]!=temp)
        {
            temp=word[i];
        }
    }
    cout<<count;
    return 0;
}
