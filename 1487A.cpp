#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long t,n,a[10000],i,b=0;
     cin>>t;
     while(t--){
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          sort(a,a+n);
           for(i=1;i<n;i++){
               if(a[0]<a[i]){
                    b++;
               }
          }
          cout<<b<<endl;
          b=0;
     }
}
