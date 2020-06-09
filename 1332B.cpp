#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;


int main(){
    fastio;
    
    int t,n,a[1001];
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int m=1,len=1,cnt=0;
    	int p[40]={3,5,7,11,13,17,19,23,29,31,37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163,167};
    	
    	int ans[n+1]={};
        int freq[168]={};
    	set<int> s;
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]&1)
    		{
    			int j=0;
    			for(;j<39;j++)
    			{
    				if(a[i]%p[j]==0)
    			    break;
    			}
    			//cout<<p[j]<<" ";
    			if(!s.empty()&&s.count(p[j]))
    			ans[i]=freq[p[j]];
    			else
    			{
    				s.insert(p[j]);
    				freq[p[j]]=len+1;
    				len++;
    				ans[i]=freq[p[j]];
    			//	cout<<len<<" ";
    			}
    			m=max(m,len);
    		}
    		else
    		{
    			ans[i]=1;
    			cnt++;
    		}
    	}
    	if(cnt==0)
        {
        	cout<<m-1<<endl;
    	for(int i=0;i<n;i++)
    	cout<<ans[i]-1<<" ";
        }	
    	else
    	{
    		cout<<m<<endl;
    	for(int i=0;i<n;i++)
    	cout<<ans[i]<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}
