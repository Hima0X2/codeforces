#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,a[100000],c=1,d=1;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
       for(i=1;i<n;i++)
     {
          if(a[i-1]>a[i])
          {
               c=1;
                continue;
          }
          else{
                     c++;
                    if(c>d)
                    {
                        d=c;
                    }

          }
     }
     cout<<d<<endl;
     return 0;
}
