#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,t,q,n,a[100000],c=0;
     cin>>t;
     while(t--){
          cin>>q;
          for(i=0;i<q;i++){
               cin>>a[i];
          }
          sort(a,a+q);
           for(i=1;i<q;i++){
               if(abs(a[i]-a[i-1])==1){
                    cout<<2<<endl;
                    c=1;
                    break;
               }
          }
          if(c==0){
               cout<<1<<endl;
          }
          c=0;
     }
}
