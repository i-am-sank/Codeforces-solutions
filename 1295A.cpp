#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0){
			while(n>0)
			{
				cout<<"1";
				n-=2;
			}
		}
		else
		{
			n-=3;
			cout<<"7";
			while(n>0)
			{
				cout<<"1";
				n-=2;
			}
		}
		cout<<endl;
	}
}
