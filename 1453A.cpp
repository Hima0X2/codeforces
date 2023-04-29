#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,a,b,c=0,i,j;
     long long int x[10000],y[10000];
     cin>>t;
     while(t--){
          cin>>a>>b;
          for(i=0;i<a;i++){
               cin>>x[i];
          }
          for(j=0;j<b;j++){
               cin>>y[j];
          }
           for(i=0;i<a;i++){
                      for(j=0;j<b;j++){
                           if(x[i]==y[j])
                           {
                                c++;
                           }
                      }
                      }
                      cout<<c<<endl;
                      c=0;
     }
}
