#include<iostream>
using namespace std;
int main()
{
	int n ;
	long a,b,ans;
	cin>>n;
	while(n--)
	{   ans=0;
		cin>>a>>b;
		while(a!=0&&b!=0)
		{
			if(a>b)
			{
				ans+=a/b;
				a=a%b;
			}
			else
			{
				ans+=b/a;
				b=b%a;
			}
		}
		cout<<ans<<endl;
	}
}
