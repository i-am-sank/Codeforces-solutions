#include<iostream>
using namespace std;
char a[200001],b[200001];
int main()
{
	int q,n,j,i;
	cin>>q;
	while(q--)
	{
		cin>>n;
		cin>>a>>b;
		i=0;j=0;
		while(i<n)
		{
			if(j==0)
			{
				if(a[i]=='1'&&a[i]=='2')
			    i++;
			    else
			    {
			    	j=1;
			    	if(b[i]=='1'&&b[i]=='2')
			    	break;
			    	i++;
				}
			}
			
			else
			{
				if(b[i]=='1'&&b[i]=='2')
			    i++;
			    else
			    {
			    	j=0;
			    	if(a[i]=='1'&&a[i]=='2')
			    	break;
			    	i++;
				}
			}
			
		}
	
		
		if(i==n&&j==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
