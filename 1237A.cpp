#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,a[14000],i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		a[i]=a[i]/2;
		else
		{
			if(sum==1)
			{
				if(a[i]<0)
           		a[i]=a[i]/2;
				else
				a[i]=a[i]/2-1;
				
				sum=0;
			}
			else
			{
				if(a[i]<0)
				a[i]=a[i]/2-1;
				else
				a[i]=a[i]/2;
				
				sum=1;
			}
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
