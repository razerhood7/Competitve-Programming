#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,n;
    char word[10000];
    cin>>word;
    for(i=0;word[i]!='\0';i++)
    {
        if(word[0]>=97)
        {
            word[0]-=32;
        }
    }
    cout<<word;
    return 0;
}
