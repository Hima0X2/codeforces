#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,t,a[100000],i,mx=0,mex,p;
     cin>>t;
     sp:
     while(t--){
          cin>>n>>k;
          set<long long int> s;
          mex=0;
          mx=0;
          for(i=0;i<n;i++){
               cin>>a[i];
               s.insert(a[i]);
               mx=max(mx,a[i]);
          }
          p=k;
          for(auto j :s){
               if(j==mex){
                      mex++;
               }
          }
          if(k>0){
          if(mex>mx){
                cout<<s.size() +p <<endl;
                goto sp;
            }
        long long z=(mx+mex)/2;
                if((mx+mex)%2!=0){
                    z++;
                }
                s.insert(z);
          }
                cout<<s.size()<<endl;
           }
}

