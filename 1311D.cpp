#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		int ans=0,k;
		for( k=1;k<=c;k++)
		{
			if(c%k==0&&b>=c/k)
			break;
		}
		if(k>1&&c/k-b>b-c/(k-1))
		ans+=c/k-b,b=c/k;
		else if(k>1)
		ans+=b-c/(k-1),b=c/(k-1);
		
		for( k=1;k<=b;k++)
		if(b%k==0&&a>=b/k)
		break;
		
		if(k>1&&b/k-a>a-b/(k-1))
		ans+=b/k-a,a=b/k;
		else if(k>1)
		ans+=a-b/(k-1),a=b/(k-1);
		
		cout<<ans<<endl;
		cout<<a<<" "<<b<<" "<<c<<endl;
		
	}
}
