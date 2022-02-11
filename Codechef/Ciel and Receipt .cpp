#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int price,ans=0;
        cin>>price;
        int arr[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
        for(int i=11;i>=0;i--)
        {
            ans+=price/arr[i];
            price%=arr[i];
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
Ciel and Receipt 
