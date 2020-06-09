#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],i,cnt1=0,cnt2=0;
	vector <int> n1,n2,n3;
	
	cin>>n;
	for( i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
	    if(a[i]<0)
		cnt1++;
	}
	if(cnt1%2==0)
	{ 
	for(i=0;i<n;i++)
	{
		if(a[i]<0&&n1.size()==0)
		{
			n1.push_back(a[i]);
		}
		else if((a[i]<0&&cnt2==0)||(a[i]==0))
		{ 
		  if(a[i]<0)
		  cnt2++;
		  n3.push_back(a[i]);
		}
		else
		n2.push_back(a[i]);
	}
	}
	else
	{
	for(i=0;i<n;i++)
	{
		if(a[i]<0&&n1.size()==0)
		{
			n1.push_back(a[i]);
		}
		else if(a[i]!=0)
		{ 
		  n2.push_back(a[i]);
		}
		else
		n3.push_back(a[i]);
	}	
	}

	cout<<n1.size()<<" ";
	for(i=0;i<n1.size();i++)
	cout<<n1[i]<<" ";
	cout<<endl;
	
	cout<<n2.size()<<" ";
	for(i=0;i<n2.size();i++)
	cout<<n2[i]<<" ";
	cout<<endl;
	
	cout<<n3.size()<<" ";
	for(i=0;i<n3.size();i++)
	cout<<n3[i]<<" ";
	cout<<endl;
}
