#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i = 0; i<=n; i++)
	{
	    cin>>a[i];
	}
	
	for(int j = n-1;j>=0;j--)
	{
	    cout<<a[j]<<" ";
	}
	cout<<"\n";
	return 0;
}