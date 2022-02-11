#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> table;
    for (int i =0 ;i<s.length();i++){
        table[s[i]] ++;
    }
   
    if(table.size()%2==0)
        cout<<"CHAT WITH HER!";
    else{
       cout<<"IGNORE HIM!";
    }
    
    return 0;
}
