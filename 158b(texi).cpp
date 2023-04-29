#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,s[100],sum=0,z=1;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>s[i];
     }
     //sort(s,s+n);
      for(i=0;i<n;i++)
     {
          sum=sum+s[i];
          if(sum>=4)
          {
               z++;
               sum=0;
          }
          else{
               //z++;
          }
     }
          cout<<z<<endl;

}
