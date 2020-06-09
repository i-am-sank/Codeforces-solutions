#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;


int main(){
    fastio;
    
    ll n,q,x;
    cin>>n>>q;
    vll a,k;
    cin>>x;
    a.pb(x);
    for(int i=1;i<n;i++)
    cin>>x,a.pb(a[i-1]+x);
    
    for(int i=0;i<q;i++)
    cin>>x,k.pb(x);
    int l=0,r=n-1,mid,ans;
    a.pb(0);
 
    for(int j=0;j<q;j++)
    {
        while(l<=r)
        {
        	mid=l+r;
        	mid>>=1;
        	if(a[mid]+a[n]>=k[j])
        	{
        		ans=mid;
        		r=mid-1;
        	}
        	else
        	l=mid+1;
        	
        //	cout<<mid<<endl;
        }
        if(l==n)
        ans=n-1;
        if(a[ans]+a[n]<=k[j])
        {
        	if(ans==n-1)
           {
           a[n]=0;
           cout<<n<<endl;
           l=0,r=n-1;
          }
          else
          {
           a[n]-=k[j];
           cout<<n-ans-1<<endl;
           l=ans,r=n-1;
          }
        }
        
        else
        {
          a[n]-=k[j];	
          if(ans==n-1)
          {
          	cout<<"1"<<endl;
          }
          else
          cout<<n-ans<<endl;
          l=ans,r=n-1;	
        }
    }
    return 0;
}
