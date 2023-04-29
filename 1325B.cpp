#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,j,t,a[100000],b[100000],c=1,k,l;
     cin>>n;
     for(i=0;i<n;i++)
          {
          cin>>t;
          for(j=0;j<t;j++)
          {
               cin>>a[j];
          }
          sort(a,a+t);
          for(k=1,l=0;k<t;k++){
               if(a[k]!=a[k-1])
               {
                    b[l]=a[k-1];
                    l++;
                    c++;
               }
          }
          cout<<c<<endl;
          c=1;
     }
}
