#include<bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
   long long int dp[12];
   dp[0]=1;
   dp[1]=1;
   for(int i=2;i<=n;i++)
   dp[i]=dp[i-1]*i;
   
   return dp[n];
}
long long int comb(int n,int p)
{
	long long int f=fact(n)/fact(p);
	f=f/fact(n-p);
	return f;
}
int main(){
	string a,b;
	cin>>a>>b;
	int i,j,ans=0,n=0,c=0;
	for(i=0;i<a.size();i++)
	if(a[i]=='+')
	ans+=1;
	else
	ans-=1;
	
	for(i=0;i<b.size();i++)
	{
		if(b[i]=='+')
		c++;
		else if(b[i]=='-')
		c--;
		else
		n++;
	}
	int f=0;
	bool flag=false;
//	cout<<c<<" "<<n<<" "<<ans<<endl;
  if(n>0)
  {
  	for(i=0;i<=2*n;i+=2)
  	{
  		if(c+n-i==ans)
  		flag=true,j=f;
  		f++;
	  }

	if(flag)
	{
	int p=comb(n,j);
	double an = p/pow(2,n);
	cout<<setprecision(10)<<fixed<<an;
	}
	else
	cout<<"0.0000000000";
  }
  else{
  	if(ans!=c)
  	cout<<"0.0000000000";
  	else
  	cout<<"1.0000000000";
  }
}
