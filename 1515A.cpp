#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,t,n,x,a[10000],k=0;
     cin>>t;
     while(t--){
               k=0;
               int sum=0;
          cin>>n>>x;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          if(n==1&&a[0]==x){
               k=1;
          }
      sort(a,a+n);
     for(i=0;i<n;i++){
          sum=sum+a[i];
          if(sum==x){
                    if(i==n-1){
                         k=1;
                    }
                    else{
               swap(a[i],a[i+1]);
                    }
          }
     }
     if(k){cout<<"NO\n";}
     else{
               cout<<"YES\n";
           for(i=0;i<n;i++){
               cout<<a[i]<<" ";
          }
           cout<<endl;
     }
     }
}
