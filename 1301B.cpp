#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod(ll a)
{
	return a>0?a:-a;
}
ll ceil(ll a,ll b)
{
	return a%b==0?a/b:a/b+1;
}
int main(){
	int t;
	ll a[100001],n,k,j,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		j=-1;
		ll temp=-1;
		k=m=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
		   	if(a[i]!=-1)
		   	{
		   		temp=a[i];
		   		break;
			   }
		}
		if(temp!=-1)
		{
		 for(int i=0;i<n;i++)
		 {
		   if(a[i]==-1)
		   {
		   	a[i]=temp;
			}
			else
			break;	
		 }
		 int prev=i;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]!=-1)
			{
				temp=a[i];
				break;
			}
		}
		
		for(int i=n-1;i>=0;i--)
		{
		   if(a[i]==-1)
		   {
		   	a[i]=temp;
			}
			else
			break;	
		}
		
		for(int i=prev+1;i<n-1;i++)
		{
		  if(a[i]!=-1)
		  {
		  temp= ceil(mod(a[i]-a[prev]),i-prev);
		  prev=i;
		  if(temp>m)
		  {
		  	temp=m;
		  	k=a[i];
			}	
		}	
		if(mod(a[i]-a[i-1])>m)
		{
		m=mod(a[i]-a[i-1]);
		k=a[i];
		}	
		}
		
		if(mod(a[n-1]-a[n-2])>m)
		{
		m=mod(a[n-1]-a[n-2]);
		k=a[n-1];
		}	
		cout<<m<<" "<<k;
		}
		else
		{
		  cout<<"0 1";	
		}
		cout<<endl;
	}
}
