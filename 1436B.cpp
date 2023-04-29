#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,j,c=0;
     cin>>t;
     while(t--){
          cin>>n;
          for(int k=2;k<n;k++){
               if(n%k==0){
                    c=1;
               }
          }
          for(i=0;i<n;i++){
               for(j=0;j<n;j++){
                    if(c==0){
                         cout<<1<<" ";
                    }

                    }
               }
               cout<<endl;
          }
     }
}
