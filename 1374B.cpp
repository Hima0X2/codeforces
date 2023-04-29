#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,c=0;
     cin>>t;
     while(t--){
          cin>>n;
          while(n>0){
          if(n==1)
          {
                break;
          }
          else if(n%6==0)
          {
               n=n/6;
               c++;
          }
          else {
               n=n*2;
               c++;
          }
          }
          cout<<c<<endl;
          c=0;
     }
}
