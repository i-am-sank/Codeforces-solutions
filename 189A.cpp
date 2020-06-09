#include<bits/stdc++.h>
using namespace std;
int f(int n,int a,int b,int c)
{
	if(n==0)
	return 1;
	else if(n<0)
	return 0;
	
	return 1+max(f(n-a,a,b,c),max(f(n-b,a,b,c),f(n-c,a,b,c)));
	
	
}

int main(){
	int n,a,b,c,i,j,k,ans=0;
	cin>>n>>a>>b>>c;
/*	k=0;
	for(int i=0;i*a<=n;i++)
	{
		
		for(int j=0;i*a+j*b<=n;j++)
		{
			k=(n-a*i-j*b)/c;
			if(c*k+a*i+b*j==n)
			ans=max(ans,i+j+k);
		}
		
	}
	cout<<ans;*/
	
	//dp
  cout<<f(n,a,b,c);
}
