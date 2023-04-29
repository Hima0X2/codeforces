#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,j;
     cin>>t;
     int a,sum=0,m,sub=0;
     for(i=0;i<t;i++){
          cin>>a;
         for(j=1;j<(a/2);j++)
         {
            sum=sum+pow(2,j);
         }
         sum=sum+pow(2,a);
        for(j=(a/2);j<a;j++)
         {
            sub=sub+pow(2,j);
         }
         m=abs(sum-sub);
         cout<<m<<endl;
         sum=0;
         sub=0;
     }
}
