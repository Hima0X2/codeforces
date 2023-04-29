#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,a,sum=0,n,c;
     cin>>t;
     back:
     while(t--){
               c=0;
          cin>>a;
          if(a<2050){
               cout<<-1<<endl;
               goto back;
          }
          else {
               if(a%2050==0){
                    n=a/2050;
                    //20500
                    //cout<<n<<endl;
               }
               else{
                     cout<<-1<<endl;
                     goto back;
               }
          }
         while(n){
               //cout<<n%10<<endl;
              c=c+n%10;
               n=n/10;
          }
     cout<<c<<endl;
     }
}
