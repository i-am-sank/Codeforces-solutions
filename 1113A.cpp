#include<iostream>
using namespace std;
int main(){
	int n,v,ans=0,i,f=0;
	cin>>n>>v;
    i=1;
	if(v<n-1)
	f=v;
	else
	f=n-1;
	ans=f;
	while((n-i-f)!=0)
	{
		f--;
		i++;
		if(v<n-i)
		ans+=i*(v-f),f=v;
		else
		{
			ans+=i*(n-i-f);
			break;
		}
	}
	cout<<ans;

}
