#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100000],b[100000],i,n,j,c=0,k;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a[i]>>b[i];
     }
     for(k=0;k<n;k++)
     {
          for(j=0;j<n;j++)
          if(a[k]==b[j]&&(i!=j))
          {
               //i++;
               c++;
          }
     }
    cout<<c<<endl;
}
