#include<bits/stdc++.h>
using namespace std;
int toggle(int *n)
{
	if(*n==0)
	*n=1;
	else
	*n=0;
}
int main(){
	int a[3][3]={},i,j,c[3][3];
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>c[i][j];
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{a[i][j]=1;}


	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    {
    	if(c[i][j]%2==1)
	{
		toggle(&a[i][j]);
		if(i==0&&j==0)
		toggle(&a[i+1][j]),toggle(&a[i][j+1]);
		
		else if(i==0&&j==1)	
		toggle(&a[i+1][j]),toggle(&a[i][j+1]),toggle(&a[i][j-1]);
			
		else if(i==1&&j==0)	
		toggle(&a[i+1][j]),toggle(&a[i][j+1]),toggle(&a[i-1][j]);
			
		else if(i==0&&j==2)	
		toggle(&a[i][j-1]),toggle(&a[i+1][j]);
			
		else if(i==1&&j==1)	
		toggle(&a[i+1][j]),toggle(&a[i][j+1]),toggle(&a[i-1][j]),toggle(&a[i][j-1]);
			
		else if(i==1&&j==2)	
		toggle(&a[i+1][j]),toggle(&a[i][j-1]),toggle(&a[i-1][j]);
			
		else if(i==2&&j==0)	
		toggle(&a[i-1][j]),toggle(&a[i][j+1]);
			
	
		else if(i==2&&j==1)	
		toggle(&a[i][j-1]),toggle(&a[i-1][j]),toggle(&a[i][j+1]);
		else 	
		toggle(&a[i-1][j]),toggle(&a[i][j-1]);
	}
	}
	
	for(i=0;i<3;i++)
	{
	   
	for(j=0;j<3;j++)
	{
		cout<<a[i][j];
	}cout<<endl;	
	}
}
