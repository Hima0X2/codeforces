#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,j,sum=1;
     cin>>n>>m;
     if(n>m)
          for(i=1;i<=m;i++)
     {
         sum=sum*i;
     }
     else{
         for(i=1;i<=n;i++)
     {
         sum=sum*i;
     }
     }
     cout<<sum<<endl;

}
