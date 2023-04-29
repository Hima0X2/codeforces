#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,b;
    int i;
     double sum=10000,p;
     cin>>n>>m;
     for(i=0;i<n;i++){
          cin>>a>>b;
          p=(a*m/b);
          //cout<<p<<endl;
          if(p<sum){
               sum=p;
          }
     }
   cout<<fixed<<setprecision(8)<<sum<<endl;
}
