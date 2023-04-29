#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int m,n,i,sum=0,j=1,a;
     cin>>n>>m;
    m=m%((n*(n+1))/2);
     for(i=1;i<=n;i++){
          if(m<i){
               break;
          }
          m=m-i;
     }
     cout<<m<<endl;
}
