#include<iostream>
using namespace std;
bool sumten(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum==10)
	return true ;
	else
	return false;
}
int main(){
	int k,i,n,f;
	cin>>k;
	int dp[10002]={0};
	dp[1]=19;i=2;f=1;
	while(i<=k)
	{
		if(sumten(dp[i-1]+9*f))
		dp[i]=dp[i-1]+9*f,i++,f=1;
		else
		f++;
	}
	cout<<dp[k];
}
