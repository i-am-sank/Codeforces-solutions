#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,a[101],sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    if(a[i]<0&&m>0)
    sum+=a[i],m--;
    
    sum=-1*sum;
    cout<<sum;
    return 0;
}
