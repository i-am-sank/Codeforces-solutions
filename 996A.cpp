#include<iostream>
using namespace std;
int main(){
	long long int n,a[5]={1,5,10,20,100},ans=0;
	cin>>n;
	int i=4;
	while(n>0)
	{
	   	ans+=n/a[i];
	   	n=n%a[i];
	   	i--;
	}
	cout<<ans;
}
