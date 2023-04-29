#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0,j=1;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
      for(i=0;i<n;i++)
     {
         // cout<<a[i]<<endl;
     if(a[i]>=j)//1 1 3 4
     {
          c++;//1
          j++;
     }
     }
     cout<<c<<endl;
}
