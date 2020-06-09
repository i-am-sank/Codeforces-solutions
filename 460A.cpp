#include<iostream>
using namespace std;
int main()
{
	int n,m,day=0;
	cin>>n>>m;
	while(n>0)
	{
		n--;
		day++;
		if(day%m==0)
		n++;
	}
	cout<<day;
}
