#include<iostream>
using namespace std;
int main()
{
	int n,ans1=0,ans2=0,i,a[100001],m,x;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cin>>m;
	while(m--)
	{
	   cin>>x;
	   for(i=0;i<n;i++)
	   if(a[i]==x)
	   {
	   	ans1+=i+1;
	   	ans2+=n-i;
	   	break;
		}	
	}
	cout<<ans1<<" "<<ans2;
}
