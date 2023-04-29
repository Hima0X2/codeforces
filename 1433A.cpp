#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a,t,sum=0,c=0,d=0,e=0,f=0;
     cin>>t;
     for(i=0;i<t;i++){
          cin>>a;
          while(1){
          c=c+1;
          d=d+11;
          e=e+111;
          f=f+1111;
         if(c==a){sum=sum+1;break;}
         else if(d==a){sum=sum+1+2;break;}
          else if(e==a){sum=sum+1+2+3;break;}
           else if(f==a){sum=sum+1+2+3+4;break;}
           else{
               sum=sum+1+2+3+4;
           }
          }
          cout<<sum<<endl;
          sum=0;
          c=0;
          d=0;
          e=0;
          f=0;
     }
}
