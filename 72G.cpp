#include<iostream>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n;
	a=1,b=1;
	for(int i=2;i<=n;i++)
	{
		c=a;
		a=a+b;
		b=c;
	}
	cout<<a;
}
