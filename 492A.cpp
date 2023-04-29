#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,sum=0,i,j,c=0,k=0;
     cin>>n;
     for(i=1;i<=n;i=i+k)
     {
          k++;
        for(j=1;j<=(k);j++)
     {
          sum=sum+j;
     }
     if(sum<=n)
     {
          c++;
     }
     }
     cout<<c<<endl;
}
