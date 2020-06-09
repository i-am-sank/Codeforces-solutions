#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<n/2<<endl;
		while(n>0)
		{ 
		   cout<<"2 ";
		   n-=2;	
		}
	}
	else
	{
		cout<<n/2<<endl;
		while(n>3)
		{
			cout<<"2 ";
			n-=2;
		}cout<<"3"<<endl;
	}
}
