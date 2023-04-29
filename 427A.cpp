#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0,b=0;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
       for(i=0;i<n;i++)
     {
          if(a[i]>=1)
          {
               c=c+a[i];
          }
          else if(c>0)
          {
               c--;
          }
          else
          {
               b++;
          }
     }
     cout<<b<<endl;
     return 0;
}
