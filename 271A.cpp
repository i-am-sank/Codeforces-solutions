#include<bits/stdc++.h>
using namespace std;
bool isdistinct(int n){
	int p[10]={0};
	while(n>0){
		p[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++)
	if(p[i]>1)
	return false;
	
	return true;
}
int main(){
	
	int n,i=1;
	cin>>n;
	while(!isdistinct(n+i)){
		i++;
	}
	cout<<(n+i);

}
