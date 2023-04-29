#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=1,d,sum=0,sub=0;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
          sum=sum+a[i];
     }
     sort(a,a+n,greater<int>());
      for(i=0;i<n;i++)
     {
          //cout<<sum<<endl;
          sub=sub+a[i];
          if(sub<=sum/2)
          {
      c++;
          }
         // cout<<c<<endl;
     }
 cout<<c<<endl;
}
