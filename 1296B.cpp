#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	ll n,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		while(n>=10)
		{
			sum=sum+(n/10)*10;
			n=n-(n/10)*10+(n/10);
			
			//cout<<n<<endl;
		}
		sum+=n;
		cout<<sum<<endl;
	}
}
