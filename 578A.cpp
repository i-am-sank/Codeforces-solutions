#include<iostream>
using namespace std;
int main()
{
   int n,i,j;	
   char a[100001];
   int room[10]={0};
   cin>>n>>a;
   
   for(i=0;i<n;i++)
   {
   	 if(a[i]=='L')
		{
		
			for(j=0;j<10;j++)
			{
				if(room[j]==0)
				{
					room[j]=1;
					break;
				}
			}
		  }
	else if(a[i]=='R')
	{
	
		for(j=9;j>=0;j--)
			{
				if(room[j]==0)
				{
					room[j]=1;
					break;
				}
			}
	}
	else
	{
		room[a[i]-'0']=0;
	}
		    
   }
   for(i=0;i<10;i++)
   cout<<room[i];
} 
