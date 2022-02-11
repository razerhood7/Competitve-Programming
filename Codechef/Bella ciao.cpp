#include<iostream>
using namespace std;
int main()
{
	int t;
	long long D,d,p,Q,n;
	long long money;
	cin>>t;
	while(t--)
	{
		cin>>D;
		cin>>d;
		cin>>p;
		cin>>Q;
		money=0;
		n=D/d;
		money=(p*n + Q*(n*(n-1))/2)*d;
		if(D%d !=0)
		{
		    money=money+(D%d)*(p+Q*n);
		}
		cout<<money<<"\n";
	}
	return 0;
}
