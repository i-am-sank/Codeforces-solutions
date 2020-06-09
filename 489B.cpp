#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,ans=0,i,y,p,q;
	priority_queue <int , vector<int > ,greater<int > > pm,pg;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>x,pm.push(x);
	cin>>m;
	for(i=0;i<m;i++)
	cin>>x,pg.push(x);

	while(pm.empty()==false&&pg.empty()==false)
	{  x=pm.top(),y=pg.top();
	   
		if(x==y||x==(y+1)||(x+1)==y)
		ans++,pm.pop(),pg.pop(),x=0,y=0;
	
		else
		{
			if(x>y)
			pg.pop();
			else
			pm.pop();
		}
	}
	cout<<ans;	
}
