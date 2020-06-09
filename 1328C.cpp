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
    	string s,a="",b="";
    	cin>>s;
    	a+='1';
    	b+='1';
    	bool p=true; 
    	for(int i=1;i<n;i++)
    	{
    		if(s[i]=='2')
    		{
    			if(p)
    			{
    			a+='1';
    	        b+='1';
    			}
    			else
    			{
    				a+='0';
    				b+='2';
    			}
    		}
    		else if (s[i]=='1')
    		{
    			    if(p)
    				{
    				a+='1';
    			    b+='0';
    			    p=false;
    				}
    			else
    			{
    				a+='0';
    			    b+='1';
    			}
    		}
    		else
    		{
    			a+='0';
    			b+='0';
    		}
    	}
    	cout<<a<<"\n"<<b<<"\n";
    }
    return 0;
}
