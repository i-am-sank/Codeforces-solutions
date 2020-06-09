#include<iostream>
using namespace std;
int power(long long int x)
{
	int n=0;
	while(x>0)
	{
		x=x/2;
		n++;
	}
	return (n-1);
}
int main()
{
	int q,n,i/*,freq[30]={}*/;
	long long int x;
	cin>>q;
	while(q--)
	{
		int freq[30]={};
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			freq[power(x)]++;
		}
	  if(freq[11]>0)
	  cout<<"YES"<<endl;
	  else
	  {
	  	for(i=0;i<30;i++)
		{
		   freq[i+1]+=freq[i]/2;	
		}
		if(freq[11]>0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	  }
	}
}
