#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,d;
	cin>>t;
	while(t--)
	{
		cin>>d;
		
		if(d*d-4*d>=0)
		{
			cout<<"Y ";
			double a,b;
			a=(d+sqrt(d*d-4*d))/2;
			b=a/(a-1);
			
			if(b==-0.0000000000)
			b=-b;
			cout<<setprecision(10)<<fixed<<a<<" "<<b;
		}
		else
		cout<<"N";
		
		cout<<endl;
	}
}
