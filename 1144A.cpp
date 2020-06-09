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
    cin>>n;
    while(n--){
    	string s;
    	cin>>s;
    	
    	int a[26]={};
    	for(int i=0;i<s.size();i++)
    	a[s[i]-'a']++;
    	bool p=true;
    	int cnt=0;
    	for(int i=0;i<26;i++)
    	{
    		if(a[i]>1)
    		{
    			p=false;
    			break;
    		}
    		else if(a[i]==1)
    		{cnt=0;
    		
    		   while(i<26&&a[i]==1) cnt++,i++;
    		   if(cnt<s.size()){
    		   	p=false;
    		   	break;
    		   }
    		}
    	}
    	if(p) cout<<"Yes\n";
    	else
    	cout<<"No\n";
    }
    
    return 0;
}
