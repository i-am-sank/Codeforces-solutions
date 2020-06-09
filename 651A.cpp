#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,ans=0,c;
	cin>>a>>b;
	if(a==1&&b==1)
	cout<<ans;
	else
    {
    	while(a>0&&b>0)
	{
		c=a;
		a=min(a,b);
		b=max(c,b);
		
		a++;
		b-=2;
	//	cout<<a<<" "<<b<<endl;
		ans++;
	}
	cout<<ans;
	} 
}
