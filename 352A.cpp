#include<iostream>
using namespace std;
int main()
{
    int n,a[1001],i,count1=0,count2,r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        count1++;
    }
    if(count1>0)
    { count2=n-count1;
      
      if(count2>=9)
      {   count2-=count2%9;
          while(count2--)
          {
          	cout<<"5";
		  }
		  while(count1--)
		  {
		  	cout<<"0";
		  }
      }
      else
      cout<<"0";
    }
    else
    cout<<"-1";
}
