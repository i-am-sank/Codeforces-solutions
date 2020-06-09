
#include <bits/stdc++.h>
using namespace std;
 
long long int poow(long long int a)
{
    long long int b=2;
    long long int ans=1;
    while(a)
    {
        if(a&1)
        ans=ans*b;
        b=b*b;
        a=a>>1;
    }
    return ans;
}
 
long long int tri(long long int g)
{
    long long int ans=0;
    long long int b=1;
    while(g)
    {
        if(g&1)
        ans=ans+b;
        b=b*3;
        g=g>>1;
    }
    return ans;
}
 
int main() {
    int t;
    cin>>t;
    vector<long long int> v;
    long long int l=1;
    v.push_back(l);
    while(l<1000000000000000000)
    {
        l=l*3;
        v.push_back(l);
    }
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int g=0;
        long long int k,p=-1;
        long long int y=n;
        vector<long long int> f;
        while(1)
        {
            k=lower_bound(v.begin(),v.end(),y)-v.begin();
            if(v[k]>y)
            k--;
            if(k==p)
            break;
            else
            {
                f.push_back(k);
                y=y-v[k];
                p=k;
                if(y==0)
                break;
                
            }
        }
        if(y==0)
        cout<<n<<endl;
        else
        {
            for(long long int i=0;i<k;i++)
            f.push_back(i);
            for(long long int i=0;i<f.size();i++)
            g=g+poow(f[i]);
            g++;
            cout<<tri(g)<<endl;
        }
    }
	return 0;
}