#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,c=0,k,x=0,a,b;
      long long int s[10000];
      cin>>t;
      while(t--){
          cin>>n;
          for(i=0;i<n;i++){
               cin>>s[i];
          }
          for(i=0;i<n;i++){
               if(s[i]==1){
                     a=i;
                    break;
               }
          }
          for(i=n-1;i>=0;i--){
               if(s[i]==1){
                     b=i;
                    break;
               }
          }
          //cout<<a<<" "<<b<<endl;
          for(i=a;i<=b;i++){
                if(s[i]==0)
                {
                     c++;
                }
          }
          cout<<c<<endl;
          c=0;
      }

}
