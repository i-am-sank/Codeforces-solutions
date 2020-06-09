#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,p[102],a[101];
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int i=0;i<m;i++)
		cin>>p[i];
			
	   bool visp[101]={};
	   memset(visp,false,n);
	   for(int i=0;i<n;i++)
	   {
	   	  for(int j=0;j<n-1;j++)
	   	  {
	   	  	if(a[j]>a[j+1])
	   	  	{
	   	  		int temp=a[j];
	   	  		a[j]=a[j+1];
	   	  		a[j+1]=temp;
	   	  		visp[j+1]=true;
			}
			}
	   }
	  
	   int i,k=0,h=0;
	   bool flag=false;
	   for( i=1;i<=n;i++)
	   {
	   	flag=false;
	   	 if(visp[i])
	   	 {
	   	 	for(int j=0;j<m;j++)
	   	 	{
	   	 		if(i==p[j])
	   	 		flag=true;
			}
			h++;
		//	cout<<h;
		  }
		  if(flag)
		  k++;
	   }
	   
	   if(k!=h)
	   cout<<"NO"<<endl;
	   else
	   cout<<"YES"<<endl;
	}
}
