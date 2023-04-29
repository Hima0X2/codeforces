#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int t,n,i;
     long long int a[1000];
     cin>>t;
     name:
     while(t--){
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
            for(i=0;i<n;i++){
               double z=sqrt(a[i]);
              // cout<<z<<endl;
               if(z!=int(z)){
                    cout<<"YES\n";
                    goto name;
               }
          }
          cout<<"NO\n";
     }
}
