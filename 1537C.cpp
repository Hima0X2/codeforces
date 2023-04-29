#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,k;
     cin>>t;
     while(t--){
          k=1;
          cin>>n;
          long long int a[n],b[n];
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          sort(a,a+n);
          if(n==2){
               cout<<a[0]<<" "<<a[1]<<endl;
               continue;
          }
          long long int mn=a[1]-a[0];
     for(i=1;i<n;i++){
                if(a[i]-a[i-1]<mn){
                  mn=a[i]-a[i-1];
                    k=i;
                }
           }
          // cout<<k<<endl;
           cout<<a[k-1]<<" ";
            for(i=k+1;i<n;i++){
                         cout<<a[i]<<" ";
     }
     for(i=0;i<k-1;i++){
          cout<<a[i]<<" ";
     }
     cout<<a[k]<<endl;
     }
}
