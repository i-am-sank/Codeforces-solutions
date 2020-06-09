#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
   
    ll t,n,r,i,j;
    string s;
    cin>>t;

    while(t--){
    	cin>>s;
    	vector<ll > ans;
    	r=0;
    	n=s.size();
    	string a;
    	for(i=0;i<n-2;i++)
    	{
    		a="";
    		for( j=i;j<i+3;j++)
    		{
    			a+=s[j];
			}
			if(a=="one")
			{
				s[i]='/';
				r++;
				ans.push_back(i);
			}
			if(a=="two")
			{
				s[i+2]='/';
				r++;
				ans.push_back(i+2);
			}
		//	cout<<a<<endl;
		}
		cout<<r<<endl;
		for(i=0;i<ans.size();i++)
		cout<<ans[i]+1<<" ";
		cout<<endl;
		
		ans.clear();
	}
}
