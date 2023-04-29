#include<bits/stdc++.h>
using namespace std;
int main()
{
      int q,i,j,n,m,sum=0;
     cin>>q;
     for(i=0;i<q;i++)
     {
          cin>>n;
          for(j=0;j<n;j++){
               cin>>m;
               sum=sum+m;
          }
          //cout<<sum/n<<endl;
          sum=(sum+n-1)/n;
          cout<<sum<<endl;
          sum=0;
     }
}
