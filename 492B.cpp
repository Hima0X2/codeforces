#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,b,m=0,i;
     cin>>n>>b;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
      for(i=0;i<n-1;i++)
     {
          if(a[i+1]-a[i]>m){
               m=a[i+1]-a[i];
          }
          double x=a[0];
}
}
