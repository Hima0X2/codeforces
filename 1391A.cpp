#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,j,a[100];
     cin>>t;
     for(i=0;i<t;i++){
          cin>>n;
          if(n==1)cout<<1<<endl;
          else{
               for(j=1;j<n;j++)
               {
                    cout<<j<<" ";
               }
               cout<<n<<endl;
          }
}
}
