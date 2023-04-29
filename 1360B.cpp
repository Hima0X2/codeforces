#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,i,n,a[10000],max;
   cin>>t;
   while(t--){
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     max=a[1]-a[0];
     for(i=1;i<n;i++){
          if(a[i]-a[i-1]<max)
          {
               max=a[i]-a[i-1];
          }
     }
     cout<<max<<endl;
    // max=0;
   }
}
