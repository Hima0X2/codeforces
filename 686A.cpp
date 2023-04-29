#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,z,sum,a,c=0;
     char ch;
     cin>>n>>z;
     sum=z;
     for(i=0;i<n;i++)
     {
          cin>>ch;
          cin>>a;
          if(ch=='+'){
          sum=sum+a;}
          else if(ch=='-'){
          sum=sum-a;}
          if(sum<0)
          {
               sum=sum+a;
               c++;
          }
          else{
               sum=sum;
          }
     }
     cout<<sum<<" "<<c<<endl;
}
