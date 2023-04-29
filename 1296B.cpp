#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,t,k,d;
     cin>>n;
     while(n--)
     {
          cin>>t;
          i=t/10;
          if(i%10==0)
          {
           cout<<1<<endl;
          }
          else {
               k=t%10;
               if((k+i)%10==0){
                   d=(k+t)/10;
                    cout<<t+d<<endl;
               }
          }

     }
}
