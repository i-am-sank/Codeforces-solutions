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
    long long int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int a[n+1]={0};
    int p;
    for(long long int i=n-1;i>=0;i--)
    {
        p=a[i+1]+(s[i]-'a')+(t[i]-'a');
        a[i+1]=p%26;
        a[i]=p/26;
    }
    for(long long int i=0;i<=n;i++)
    {
        if(a[i]&1)
        {
            a[i]=a[i]/2;
            a[i+1]=a[i+1]+26;
        }
        else
        a[i]=a[i]/2;
    }
    char c;
    for(long long int i=1;i<=n;i++)
    {
        c=a[i]+'a';
        cout<<c;
    }
    return 0;
}
