#include<iostream>
using namespace std;
bool digitcheck(int n)
{
	int ans[10]={};
	while(n>0)
	{
	    int	rem=n%10;
		ans[rem]++;
		n=n/10;
	}
	for(int i=0;i<10;i++)
	if(ans[i]>1) 
	return false;
	
	return true; 
}
int main()
{
	int l,r,ans=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	if(digitcheck(i))
	{
		ans++;
		cout<<i;
		break;
	}

	if(ans==0)
	cout<<"-1";
	
}
