#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i;
   long long n,a,b,c=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a>>b;
          if(a%b==0)
          {
               c=0;
          }
         else if(a>b){
          c=b-(a%b);
         }
         else if((a<b))
         {
              c=b-a;
         }
          cout<<c<<endl;
          c=0;
     }
}
