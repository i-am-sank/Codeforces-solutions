#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,n1,n2,i;
	int a[100001];
	cin>>n>>n1>>n2;
	for( i=0;i<n;i++)
	cin>>a[i];
	
	double sum=0,sum1=0;
	sort(a,a+n);
	int m=min(n1,n2);
	i=n-1;
	while(m){
	 
	 sum+=a[i]	;
	 i--;
	 m--;
	}
	sum=sum/min(n1,n2);
	m=max(n1,n2);
	while(m){
		sum1+=a[i];
		i--;
		m--;
	}
	sum=sum+sum1/max(n1,n2);
	cout<<setprecision(10)<<fixed<<sum;
}
