#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,j;
     cin>>n;
     int a[n],b[n];
     for(i=1;i<=n;i++)
     {
          cin>>a[i];
          b[a[i]]=i;
     }
      for(j=1;j<=n;j++)
     {
          cout<<b[j]<<" ";
     }
     cout<<endl;
     return 0;
}
