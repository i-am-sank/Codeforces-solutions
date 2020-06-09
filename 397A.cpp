#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[101][2],al,ar;
  cin>>n;
  cin>>al>>ar;
  bool p[101]={};
  
  for(int i=1;i<n;i++)
  cin>>a[i][0]>>a[i][1];
  
  int ans=0;
  
  for(int i=1;i<n;i++)
  {
  	 for(int j=a[i][0]+1;j<=a[i][1];j++)
  	 p[j]=true;
  }
  for(int i=al+1;i<=ar;i++)
  if(!p[i])
  ans++;
  
  cout<<ans;
}
