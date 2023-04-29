#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,a[10000],c=0,d=0;
     cin>>t;
     while(t--){
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
             for(i=0;i<n;i++){
                  if(a[i]==1){
                    c++;
                  }
                    else if(a[i]==3){
                    c++;
                  }
             }
             cout<<c<<endl;
             c=0;
     }
}
