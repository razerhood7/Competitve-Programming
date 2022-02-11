#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //cout<<"nigga"<<endl;
        char first,second,third;
        cin>>first>>second>>third;
        char x,y;
        cin>>x>>y;
        if (x == first && ((y == second) || (y == third)))
        {
	        cout << x << endl;
        }
        else if (y == first && ((x == second) || (x == third)))
        {
	        cout << y << endl;
        }
        else if(y == second && x == third)
        {
            cout<< y << endl;
        }
        else if(x == second && y == third)
        {
            cout<< x << endl;
        }
    }

    return 0;
}
