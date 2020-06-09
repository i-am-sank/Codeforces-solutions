#include<bits/stdc++.h>
using namespace std;
int pow2(unsigned long long int n)
{
	int pow=0;
	if(n==1)
	return 0;

   while(n!=1)
   {
   	n=n/2;
   	pow++;
   }
 	return pow;
}
long long int power(long long int a,long long int b){
unsigned long long int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;	
}
int binarycheck(long long int l,long long int r){
	
	int p=0,ans;
	while(l!=1){
		if(l%2!=r%2)
		ans=p;
		l=l/2,r=r/2;
		p++;
	}
	return ans;
}
int main(){
	unsigned long long int l,r,x;
	cin>>l>>r;
	if(l-r==0)
	cout<<"0";
	
	else
	{
		//cout<<pow2(l)<<" "<<pow2(r)<<endl;
		if(pow2(l)<pow2(r))
		{
			
			unsigned long long int p=power(2,pow2(r)+1)-1;
			cout<<p;
		}
		else
		{
		 int q=binarycheck(l,r);
		 unsigned long long int a=power(2,q+1)-1;
		 cout<<a;
		}
	}

}
