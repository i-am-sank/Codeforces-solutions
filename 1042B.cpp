#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	int n,i;
	string s;
	map<int ,string > a;
	vector<int > b;
	cin>>n;
	while(n--){
		cin>>i>>s;
		b.push_back(i);
		a.insert({i,s});
	}
	for(int i=0;i<b.size();i++)
	cout<<b[i]<<" "<<a[b[i]]<<endl;
}
