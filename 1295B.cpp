#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,x,a[100001];
	string s;
	int t,i;
	cin>>t;
	while(t--){
		cin>>n>>x;
		cin>>s;
		int flag=0;
		a[0]=s[0]=='0'?1:-1;
		
		for(i=1;i<n;i++)
		{
			if(s[i]=='0')
			a[i]=a[i-1]+1;
			else
			a[i]=a[i-1]-1;
		}
		
		if(a[n-1]==0&&n>1)
		{
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"-1"<<endl;
		else if(x==0)
		cout<<"1"<<endl;
		else
		cout<<"0"<<endl;
		}
		else if(n==1)
		{
			if(a[0]>=0&&x>=0||a[0]<0&&x<0)
			cout<<"1"<<endl;
			else
			cout<<"0"<<endl;
		}
		else
		{
			for(i=0;i<n;i++)
   		    {
			   if(x-a[i]>0&&a[n-1]>0&&(x-a[i])%a[n-1]==0)
			   flag++;
	          
	           if(x-a[i]<0&&a[n-1]<0&&(x-a[i])%a[n-1]==0)
	           flag++;
		    }
		   if(x==0)
		   cout<<flag+1<<endl;
		   else
		   cout<<flag<<endl;
		}
	}
}
