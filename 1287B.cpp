#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,j,h;
	int diff=0,same=0,ans=0,e=0;
	vector<string > s;
	string x;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>x;
		s.push_back(x);
	}
//	cout<<s[0][0]<<endl;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(h=j+1;h<n;h++)
			{
				for(int g=0;g<k;g++)
				{
				//	char a,b,c;
					
					if(s[i][g]==s[j][g]&&s[j][g]==s[h][g])
					same++;
					else if(s[i][g]!=s[j][g]&&s[j][g]!=s[h][g])
					diff++;
					else
					e++;
				}
			//	cout<<diff<<endl;
				if(diff==k||(diff%2==0&&same%2==0&&e==0)||same==k)
				ans++;
			}
		}
	}
	
	cout<<ans;
}
