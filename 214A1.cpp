#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long m,n,i,j,c=0;
     cin>>n>>m;
     for(i=0;i<=n;i++){
          for(j=0;j<=m;j++){
               if((i*i+j==n)&&(i+j*j==m)){
                    c++;
               }
          }
     }
     cout<<c<<endl;
}
