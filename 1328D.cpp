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
    
    ll t,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll a[n+2];
    	for(ll i=0;i<n;i++)
    	cin>>a[i];
    	bool p=true;
    	if(n&1)
    	{
    		ll cnt=0;
    		if(a[0]==a[n-1])
    		{
    			for(int i=0;i<n;i++)
    			if(a[i]==a[i-1])
    			cnt++;
    		if(cnt==n-1)
    		{
    			cout<<"1\n";
    			for(int i=0;i<n;i++)
    			cout<<"1 ";
    		}
    		else{
    				cout<<"2\n";
    		for(int i=0;i<n;i++)
    		{
    			if(p)
    			cout<<"1 ";
    			else
    			cout<<"2 ";
    			
    			p=!p;
    		}
    		}
    		}
    		else{
    			for(int i=1;i<n;i++)
    			{
    				if(a[i]==a[i-1])
    			    {
    			    	p=false;
    			    	break;
    			    }
    			}
    			if(p)
    			{
    				cout<<"3\n";
    		for(int i=0;i<n-1;i++)
    		 {
    			if(p)
    			cout<<"1 ";
    			else
    			cout<<"2 ";
    			
    			p=!p;
    		 } cout<<"3 ";
    			}
    		else
    		{
    			bool f=true;
    			cout<<"2\n";
    			cout<<"1 ";
    			for(int i=1;i<n;i++)
    			{
    				if(a[i]==a[i-1]&&f)
    				{
    				f=false;
    				if(!p)
    				cout<<"1 ";
    				else
    				cout<<"2 ";
    				
    				p=!p;
    				}
    				
    				else
    				{
    				if(p)
    				cout<<"1 ";
    				else
    				cout<<"2 ";
    				}
    				
    				p=!p;
    			}
    		}	
    			
    		}
    	}
    	else
    	{
    		ll cnt=0;
    			for(int i=0;i<n;i++)
    			if(a[i]==a[i-1])
    			cnt++;
    		if(cnt==n-1)
    		{
    			cout<<"1\n";
    			for(int i=0;i<n;i++)
    			cout<<"1 ";
    		}
    		else
    		{
    			cout<<"2\n";
    			for(int i=0;i<n;i++)
    		 {
    			if(p)
    			cout<<"1 ";
    			else
    			cout<<"2 ";
    			
    			p=!p;
    		 }
    		}
    		
    	}
    	cout<<endl;
    }
    return 0;
}
