#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,sum=0,c=1;
     cin>>n>>m;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];
          //sum=sum+a[i];
     }
     sort(a,a+n);
     reverse(a,a+n);
      for(i=0;i<n;i++){
               sum=sum+a[i];
           if(sum<m)
          {
               c++;
          }
     }
     cout<<c<<endl;

}
