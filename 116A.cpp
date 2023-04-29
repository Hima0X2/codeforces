#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,b,i,sum=0,p=0,sub;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a;
          cin>>b;
          sum=sum-a;
         sum=sum+b;
         if(p<=sum){
          p=sum;
         }
     }
     cout<<p<<endl;
     return 0;
}
