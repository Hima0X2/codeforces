#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[100],i,sum=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
      for(i=0;i<n;i++)
     {
          sum=sum+a[i];//5
     }
     cout<<a[n-1]*n-sum<<endl;
}
