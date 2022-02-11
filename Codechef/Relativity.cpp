#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,c,result=0,res1=0;
        cin>>g>>c;
        result=pow(c,2);
        res1=result/(2*g);
        //result=result/2*g;
        cout<<res1<<endl;
    }
}
