#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,s,i,temp=0;
    cin>>m>>s;
    int a[101]={};
    if(s==0&&m>1||s>9*m)
    {
        cout<<"-1 -1";
   
    }
    else if(s==0&&m==1)
    cout<<"0 0";
    else 
    {
       temp=s;
       a[0]=1;
       s=s-1;
       i=m-1;
       while(s>0)
       {
          if(s>=9)
          {
              a[i]+=9;
              s-=9;
          }
          else
          a[i]+=s,s=0;
          i--;
       } 
    for(i=0;i<m;i++)
    cout<<a[i];
    cout<<" ";
    
    while(temp>0)
    {
    	if(temp>=9)
    	cout<<"9",temp-=9;
    	else
    	cout<<temp,temp=0;
    	m--;
	}
    while(m--)
    {cout<<"0";
	}
}}

