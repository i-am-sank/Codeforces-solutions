#include<bits/stdc++.h>
using namespace std;
int mod(int x){
	if(x>=0)
	return x;
	else
	return -1*x;
}
int main(){
	string s;
	int n,i,j;
	cin>>s;
	n=s.size();
    vector<int > a,b;
    for(i=0;i<n-1;i++)
    {
    	if(s[i]=='A'&&s[i+1]=='B')
    	a.push_back(i);
    	else if(s[i]=='B'&&s[i+1]=='A')
    	b.push_back(i);
	}

	if(!a.empty()&&!b.empty())
	{
	//	cout<<b[b.size()-1]<<" "<<a[0]<<endl;
	for(j=0;j<a.size();j++)
	for(i=0;i<b.size();i++)
	{
		if(mod(b[i]-a[j])>1)
	    {
	    	cout<<"YES";
	    	break;
		}
	}
	}
	else 
	cout<<"NO";
}
