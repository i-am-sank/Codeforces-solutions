#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define pii pair<int,int> 
#define pll pair<ll,ll>
#define vpii vector<pii >
#define vpll vector<pll >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 

using namespace std;



int main(){
    fastio;
    int n;
    ll a[2001];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    ll sum=0;
    vll o,e;
    for(int i=0;i<n;i++)
    {
    	sum+=a[i];
    	
    	if(a[i]&1) o.pb(a[i]);
    	else
    	e.pb(a[i]);
    }
    ll m1=0,m2=0;
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    reverse(o.begin(),o.end());
    reverse(e.begin(),e.end());
    int i=0,j=0;
    bool p=true;
   while(i<e.size()&&j<o.size())
   {
   	 if(p)
   	  m1+=e[i],i++,p=!p;
   	  else
   	  m1+=o[j],j++,p=!p;
   }
   if(i==e.size()&&j<o.size()) m1+=o[j];
   if(j==o.size()&&i<e.size()) m1+=e[i];
   p=false,i=0,j=0;
   while(i<e.size()&&j<o.size())
   {
   	 if(p)
   	  m2+=e[i],i++,p=!p;
   	  else
   	  m2+=o[j],j++,p=!p;
   }
   if(i==e.size()&&j<o.size()) m2+=o[j];
   if(j==o.size()&&i<e.size()) m2+=e[i];
//   cout<<m1<<" "<<m2<<" ";
    cout<<sum-max(m1,m2);
    return 0;
}
