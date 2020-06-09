#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,ps1[100]={},ps2[100]={},i,ans=0;
	char a[101];
	cin>>a;
	n=strlen(a);
	
	if(a[0]=='Q')
	ps1[0]=1;
	
	for(i=1;i<n;i++)
    {
    if(a[i]=='Q')
	ps1[i]=1+ps1[i-1];
	else
	ps1[i]=ps1[i-1];
	
	}
	if(a[n-1]=='Q')
	ps2[n-1]=1;
	
	for(i=n-2;i>=0;i--)
    {
    if(a[i]=='Q')
	ps2[i]=1+ps2[i+1];
	else
	ps2[i]=ps2[i+1];
	}
	for(i=0;i<n;i++)
	{
	//	cout<<ps1[i]<<" "<<ps2[i]<<endl;
		if(a[i]=='A')
		ans+=ps1[i]*ps2[i];
	}
	cout<<ans;
}
