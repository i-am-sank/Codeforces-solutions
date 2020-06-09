#include<iostream>
using namespace std;
int main()
{
	int n,i,oc=0,ec=0;
	long long int a[101];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		ec++;
		else
		oc++;
	}
	if(ec>oc)
	{
		cout<<oc;
	}
	else
	cout<<ec;
}
