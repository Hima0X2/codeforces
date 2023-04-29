#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum=0,c=0,i;
    double j;
     cin>>n>>m;
     if(n<m)
     {
          cout<<"-1"<<endl;
          return 0;
     }
     else if(n==m)
     {
           cout<<m<<endl;
           return 0;
     }
     else
     {
          j=n/2;
          if(j*2==n)
          {
               sum=n/2;
               if(sum%m==0)
               {
                    cout<<sum<<endl;
                    return 0;
               }
               else{
                    for(i=sum;;i++)
                    {
                         if(sum%m==0)
                         {
                              cout<<sum<<endl;
                              return 0;
                         }
                         else{sum++;}
                    }
              } }
              else{
                    sum=(n/2)+1;
                  for(i=sum;;i++)
                    {
                         if(sum%m==0)
                         {
                              cout<<sum<<endl;
                              return 0;
                         }
                         else{sum++;}
                    }
              }
          }
     }
