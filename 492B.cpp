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
    
    int n,l;
    cin>>n>>l;
    int a[n+1];
    int ans=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    priority_queue <int> pq;
    sort(a,a+n);
    pq.push(a[0]-0);
    pq.push(l-a[n-1]);
    for(int i=n-1;i>=0;i--)
    {
    	pq.push(a[i]-a[i-1]);
    }
    ans=pq.top();
    double y=ans;
   if(ans/2<(a[0]-0)||ans/2<(l-a[n-1]))
    cout<<setprecision(9)<<fixed<<(double)max(a[0]-0,l-a[n-1]);
    else
    cout<<setprecision(9)<<fixed<<y/2;
    return 0;
}
