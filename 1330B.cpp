#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 

using namespace std;



int main(){
	fastio;
     int t;
     cin>>t;
     while(t--)
     {
        int n=1;cin>>n;
        int a[n];
   
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
   
      
        int sumL=0,sumR=0;
        sumL=a[0];
        for(int i=1;i<n;i++)sumR+=a[i];
        map<int,int>M;
                 
            map<int,int>L;
            L[a[0]]++;
                 
            for(int i=1;i<n;i++){
                int left=i*(i+1)/2;
                int right=(n-i)*(n-i+1)/2;
                
                if(left==sumL&&right==sumR){
                        M[i]=n-i;
                }
                    
                    sumL+=a[i];
                    sumR-=a[i];
                    
                    L[a[i]]++;

                if(L[a[i]]>=2){break;}
            }


reverse(a,a+n);

sumL=0;sumR=0;int key=0;
        sumL=a[0];
        for(int i=1;i<n;i++)sumR+=a[i];
        
        L.clear();
            L[a[0]]++;
                 
            for(int i=1;i<n;i++){
                int left=i*(i+1)/2;
                int right=(n-i)*(n-i+1)/2;
                
                if(left==sumL&&right==sumR){
                        if(key==1)M.erase(n-i);
                }
                    
                    sumL+=a[i];
                    sumR-=a[i];
                    
                    L[a[i]]++;

                if(L[a[i]]>=2){key=1;}
            }


  
         
             cout<<M.size()<<endl;
             if(M.size()>=1)
             for(auto i=M.begin();i!=M.end();i++)cout<<(*i).first<<" "<<(*i).second<<endl;
  
      
     }
     return(0);
    return 0;
}
