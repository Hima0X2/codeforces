#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,sum,n,rev,d,z=0,x=0;
     cin>>n;
     int p=log10(n)+1;
     //cout<<p<<endl;
     bac:
          z=0;
          x=0;
           rev=n;
     while(z!=p){
          d=rev%10;
          z++;
          x=x+d;
          rev=rev/10;

     }
       sum=rev+x;
      // cout<<sum<<endl;
     while(1){
          if(sum%4==0){
               cout<<n<<endl;
               break;
          }
          else{
               n=n+1;
               goto bac;
          }
     }
     //cout<<sum<<endl;
}
