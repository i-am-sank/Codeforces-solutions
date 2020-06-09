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
    int t,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	if(n==1)
    	cout<<"-1\n";
    	else
    	{
    		cout<<"5";
    		for(int i=1;i<n;i++)
    		cout<<"7";
    		cout<<"\n";
    	}
    }
    
    return 0;
}
