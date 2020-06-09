#include<iostream>
using namespace std;
int main()
{
	int n,x,i;
	long long int sum=0;
	cin>>n>>x;
	
	while(n--)
	{
		cin>>i;
		sum+=i;
	}
	if(sum<0)
	sum*=-1;
	
	if(sum<=x&&sum!=0)
	cout<<"1";
	else if(sum==0)
	cout<<"0";
	else if((sum%x)==0)
	cout<<sum/x;
	else
	cout<<sum/x+1;
	
}
