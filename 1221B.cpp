#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	char a='W';
	cin>>n;
	for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	 {
		cout<<a;
		if(a=='W')
		a='B';
		else
		a='W';
	 }
	    cout<<endl;
	if(n%2==0)
	{
		if(a=='W')
		a='B';
		else
		a='W';
	}
	}
}
