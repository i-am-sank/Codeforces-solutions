#include<iostream>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
	int h,w,r[1001],c[1001],i,j,ans=0;
	
	cin>>h>>w;
	for(i=0;i<h;i++)
	cin>>r[i];
	for(j=0;j<w;j++)
	cin>>c[j];
	
	for(i=0;i<h;i++)
	for(j=0;j<w;j++)
	{
		if(j==w-1&&r[i]<j&&c[j]<=i)
		ans++;
		else if(i==h-1&&r[i]<=j&&c[j]<i)
		ans++;
		else if(r[i]<j&&c[j]<i)
		ans++;
	}
	if(ans==0)
	cout<<"0";
	else
	cout<<binpow(2,ans,1000000007);
}
