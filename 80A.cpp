#include<bits/stdc++.h>
using namespace std;
int prim(int n){
     int d=0;
for(int i=2;i<n;i++){
     if(n%i==0){
          d=1;
     }
}
return d;
}
int main()
{
     bool prime=true;
     int n,m,i,j,c=0,k,d;
     cin>>n>>m;
     for(i=2;i<m;i++){
          if(m%i==0){
               cout<<"NO"<<endl;
               return 0;
          }
     }
     for(j=n+1;j<m;j++){
          d=prim(j);
          if(d==0){
               cout<<"NO"<<endl;
                return 0;
          }
     }
     cout<<"YES"<<endl;
}
