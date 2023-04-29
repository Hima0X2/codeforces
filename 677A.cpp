#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,h,a[10000],i,sum=0;
     cin>>n>>h;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
          if(a[i]>h)
          {
               sum=sum+2;
          }
          else{
            sum=sum+1;
          }
     }
     cout<<sum<<endl;
     return 0;
}
