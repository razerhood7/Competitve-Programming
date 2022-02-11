#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, y, n;
		cin>>x>>y>>n;
		int c = n % x;
		if(c >= y){
			cout<<(n - (c - y))<<endl;
		}
		else{
			cout<<(n - (c + x - y))<<endl;
		}
	}
	return 0;
}
