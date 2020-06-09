#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,n;
	char a[301];
	cin>>a;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='.')
		cout<<"0";
		else if(a[i]=='-'&&a[i+1]=='.')
		i++,cout<<"1";
		else if(a[i]=='-'&&a[i+1]=='-')
		i++,cout<<"2";
	}
}
