#include<iostream>
using namespace std;
int main()
{
    long long int r,g,b,ans;
    cin>>r>>g>>b;
    ans=r/3+g/3+b/3;
    if(r%3!=0&&g%3!=0&&b%3!=0)
     ans+=(r%3)<(g%3)?((r%3)<(b%3)?(r%3):(b%3)):((g%3)<(b%3)?(g%3):(b%3));
    cout<<ans;
}
