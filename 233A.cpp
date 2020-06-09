#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	
	if(n%2==0)
	{ 
	   m=1;
	   n=n/2;
	   while(n--)
	   {
          cout<<2*m<<" "<<2*m-1<<" ";
		  
		  m++;	   	
		}	
	}
	else
	{
		cout<<"-1";
	}
}
